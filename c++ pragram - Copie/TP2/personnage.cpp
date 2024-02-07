#include<iostream>
#include<string>
#include"personnage.h"
#include"Arme.h"

using namespace std;
void personnage::recevoirDegats(int nbdegat)
{
    m_vie-=nbdegat;
    if(m_vie<=0){
        m_vie=0;
    }
}
void personnage::attaquer(personnage &cible)
{
    cible.recevoirDegats(m_arme.getdegats());
}
void personnage::boirepotiondevie(int quantitevie)
{
    m_vie+=quantitevie;
    if(m_vie==100){
        m_vie=100;
    }
}
void personnage::changerArme(string nouvelArme,int degatsnouvelArme)
{
    m_arme.changer(nouvelArme,degatsnouvelArme);
}
bool personnage::estvivant() const
{
    if(m_vie>0){
        return true;
    }else{
        return false;
    }
}
personnage::personnage(): m_vie(100), m_mana(100)
{
}
personnage::personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),m_arme(nomArme,degatsArme)
{

}
void personnage::afficherEtat() const
{
    cout<<"Vie :"<<m_vie<<endl;
    cout<<"Mana :"<<m_mana<<endl;
    m_arme.afficher();
}


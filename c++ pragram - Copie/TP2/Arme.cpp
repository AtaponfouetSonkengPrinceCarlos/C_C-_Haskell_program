#include<iostream>
#include<string>
#include"Arme.h"
#include"personnage.h"

using namespace std;
Arme::Arme():m_nom("Epee aiguisee"), m_degats(10)
{

}
Arme::Arme(string nom,int degats):m_nom(nom), m_degats(degats)
{

}
void Arme::changer(string nom,int degats)
{
 m_nom=nom;
 m_degats=degats;
}
void Arme::afficher()
{
    cout<<"Arme :"<<m_nom<<"(Degats :"<<m_degats<<")"<<endl;
}
int Arme::getdegats() const
{
    return m_degats;
}

#include "Personnage.h"
#include <string>
#include "Arme.h"
using namespace std;
string Arme::getnomarme() const
{
    return m_nomarme;
}
int Arme::getdegats() const
{
   return m_degats;
}
void Personnage::recevoirdegats(int nbdegats)
{
    m_vie -= nbdegats;
    if (m_vie < 0)
    {
        m_vie = 0;
    }
}
void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirdegats(m_arme.getdegats());
}
void Personnage::boirepotiondevie(int qtepotion)
{
    m_vie += qtepotion;
    if (m_vie > 100)
    {
        m_vie = 100;
    }
}
void Personnage::changerarme(string nomnouvelarme, int degatsnouvelarme)
{
    m_arme.changer(nomnouvelarme, degatsnouvelarme);
}
bool Personnage::esvivant() const
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;

}
Personnage::Personnage(string nomarme, int degatsarme) : m_vie(100), m_mana(100), m_arme(nomarme, degatsarme)
{

}
Personnage::~Personnage()
{

}
void Personnage::afficheretat() const
{
    cout <<"vie "<< m_vie << endl;
    cout <<"mana "<< m_mana << endl;
    m_arme.afficher();

}


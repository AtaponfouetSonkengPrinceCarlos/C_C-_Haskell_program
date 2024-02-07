#include "personnage.h"
#include <string>
using namespace std;
void Personnage::rececoirdegats(int nbdegats)
{
    m_vie -= nbdegats;
    if (m_vie < 0)
    {
        m_vie = 0
    }
}
void personnage::attaquer(Personnage &cible)
{
    ciblr.recevoirdegats(m_degatsarme);
}
void personnage::boirepotiondevie(int qtepotion)
{
    m_vie +=qte;
    if (m_vie > 100)
    {
        m_vie = 100;
    }
}
void Personnage::changerarme(string nomnouvelarme, int degatsnouvelarme)
{
    (*this).m_nomarme = nomnouvelarme;
    (*this).m_degatsarme = nomnouvelarme;
}
bool Personnage::esvivant()
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

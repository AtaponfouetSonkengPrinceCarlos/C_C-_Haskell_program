#include "Arme.h"
#include <iostream>
#include <string>
using namespace std;
Arme::Arme() : m_nomarme("epee rouille"), m_degats(10)
{

}
Arme::Arme(string nom, int degats) : m_nomarme(nom), m_degats(degats)
{

}
void Arme::changer(string nom, int degats)
{
   (*this).m_nomarme = nom;
    (*this).m_degats = degats;
}
void Arme::afficher() const
{
    cout <<"Arme :" << m_nomarme <<"degats :(" << m_degats <<")" << endl;
}

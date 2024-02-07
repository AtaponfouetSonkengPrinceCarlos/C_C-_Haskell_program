#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED
#include<iostream>
#include<string>
#include"personnage.h"
class Arme
{
    public:
        Arme();
        Arme(std::string nom,int degats);
        void changer(std::string nom,int degats);
        void afficher();
        int getdegats() const;

    private:
        std::string m_nom;
        int m_degats;
};



#endif // ARME_H_INCLUDED

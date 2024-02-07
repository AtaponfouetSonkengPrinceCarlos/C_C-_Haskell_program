#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include<iostream>
#include<string>
#include"Arme.h"
 class personnage
 {
    public:
        personnage();
        personnage(std::string nomArme,int degatsArme);
        void recevoirDegats(int nbdegat);
        void attaquer(personnage &cible);
        void changerArme(std::string nouvelArme,int degatsnouvelArme);
        void boirepotiondevie(int quantitevie);
        bool estvivant() const;
        void afficherEtat() const;

    private:
        int m_vie;
        int m_mana;
        Arme m_arme;
 };


#endif // PERSONNAGE_H_INCLUDED

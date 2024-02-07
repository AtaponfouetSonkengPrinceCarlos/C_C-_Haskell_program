#ifndef PERSONNAGE2_H_INCLUDED
#define PERSONNAGE2_H_INCLUDED
#include<string>
class personnage2 {
    public:
        void recevoirDegats(int nbDegats);
        void attaquer(Personnage2 &cible);
        void changerArme(std::string nomnouvelArme,int degatsnouvelArme);
        bool estVivant();

    private:
        int m_vie;
        int m_mana;
        int m_degatsArme;
        std::string m_nomArme;
};


#endif // PERSONNAGE2_H_INCLUDED

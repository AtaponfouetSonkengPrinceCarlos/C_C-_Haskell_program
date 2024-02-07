#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <string>
#include <iostream>
#include "Arme.h"
class Personnage
{
private:
    int m_vie;
    int m_mana;
    Arme m_arme;
public:
    ~Personnage();
    Personnage();
    Personnage(std::string nomarme, int degatsarme);
    void recevoirdegats(int nbdegats);
    void attaquer(Personnage &cible);
    void boirepotiondevie(int quantitePotion);
    void changerarme(std::string nouvelarme, int degatnouvelarme);
    bool esvivant() const;
    void afficheretat() const;
};

#endif // PERSONNAGE_H_INCLUDED

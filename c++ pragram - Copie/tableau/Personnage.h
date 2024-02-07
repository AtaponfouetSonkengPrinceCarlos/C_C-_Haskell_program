#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <string>
class Personnage
{
public:

    int m_vie;
    int m_mana;
    std::string m_nomarme;
    int m_degatsarme;
    private:
    void recevoirdegats(int nbdegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerarme(std::string nouvelarme, int degatnouvelarme);
    bool esvivant();
};


#endif // PERSONNAGE_H_INCLUDED

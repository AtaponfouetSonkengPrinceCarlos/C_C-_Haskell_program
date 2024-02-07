#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED
#include <iostream>
#include <string>
class Arme
{
private:
    int m_degats;
    std::string m_nomarme;
public:
    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getdegats() const;
    std::string getnomarme() const;
};


#endif // ARME_H_INCLUDED

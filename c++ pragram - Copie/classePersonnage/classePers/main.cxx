#include <iostream>
#include "Personnage.h"
#include "Arme.h"
using namespace std;
int main()
{
    Personnage david, goliath;
    goliath.attaquer(david);
    david.boirepotiondevie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    cout <<"david"<< endl;
    david.afficheretat();
    goliath.changerarme("double hache tranchante", 40);
    cout <<"goliath"<< endl;
    goliath.afficheretat();
    return 0;
}

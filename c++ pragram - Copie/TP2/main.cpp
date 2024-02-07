#include<iostream>
#include<string>
#include"personnage.h"
#include"Arme.h"
 using namespace std;

 int main(){
     personnage david,goliath("Epee aiguisee",20);
     goliath.attaquer(goliath);
     david.boirepotiondevie(20);
     david.attaquer(goliath);
     goliath.boirepotiondevie(20);
     david.attaquer(goliath);
     goliath.attaquer(david);
     goliath.changerArme("Double hache",40);
     goliath.attaquer(david);
     goliath.afficherEtat();

     return 0;
 }

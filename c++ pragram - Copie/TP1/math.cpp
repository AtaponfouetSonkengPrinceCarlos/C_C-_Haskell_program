#include "math.h"
int ajoutdeux(int nb){
    nb+=2;
    return nb;
}


int seconde(int heure,int minutes,int sec){
    int total;
    total=heure*60*60;
    total+=minutes*60;
    total+=sec;
    return total;
}

double moyenne(std::vector<int>& a){
    double moy(0);
    int i;
    for(i=0;i<=a.size();i++){
        moy+=a[i];
    }
    moy/=a.size();
    return moy;
}


string melangeMot(string& a){
  int pos(0),i;
  string b(a.size);

  for(i=0;i<=a.size;i++){
    pos=rand()%(a.size()-i);
    a.erase(pos,1);
    b+=a[pos];
  }
  return b;
}





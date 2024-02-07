#include <iostream>
int const N(2);
int tab[N];
using namespace std;
int i,j,fact,value;
int main()
{

    for(i=0;i<N;i++){
      cout <<"entrer la" <<  i <<"eme valeur"<< endl;
      cin >> value;
      fact*(2);
      for( j=1;j<=value;j++){
         fact=fact*j;//calcul du factoriel
      }
      tab[i]=fact;
      cout << tab[i]<< endl;
    }
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ofstream flux("C:/Users/PRINCE CARLOS/Bureau/fichier.txt",ios::out);
  cout<<"bonjour grt1";
  if(flux)
  {
      flux<<"bomfjour grt1"<<endl;

  }else{
      cout <<"fatal error ouverture en mode lecture non accorder"<< endl;
  }
  return 0;

}

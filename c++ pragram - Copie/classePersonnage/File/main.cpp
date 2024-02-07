#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int a,b,i,p;
ifstream fichentre("C:/Users/PRINCE CARLOS/Desktop/fichier.txt",ios::in);
if(fichentre)
{
   fichentre >> a;
   fichentre >> b;
   fichentre.close();
   ofstream fichsorti("C:/Users/PRINCE CARLOS/Desktop/fichier2.txt",ios::out);
   if(fichsorti)
   {
   for(i=1;i<a;i++)
   {
       p =i*b;
       fichsorti<<"l"<<i<<"*"<<b<<"="<<p<<endl;
   }
}else{
    cout<<"erreur fatale";
}
}else{
    fichsorti >>"ereur fatale";
}

    return 0;
}

#include "Livre.h"
#include <string>
#define TRUE 1
#define FALSE
#include <fstream>
int Livre::getcode()
{
    return this->code = code;
}
void Livre::setcode(int code)
{
    this->code = code;
}
char Livre::gettitre()
{
    return this->code;
}
void Livre::settitre(char titre[50])
{
    this->titre[50] = titre[50];
}
Livre::Livre(int code, char titre[50])
{
    this->code = code;
    this->titre[50] = titre[50];
}
int Livre::operator ==(const Livre &l) const
{
     return this->titre[50] == titre[50] && this->code == code;
}
Livre::Livre(Livre &l)
{
    this->code = l.code;
    this->titre[50] = titre[50];;
}
void Livre::ecrirefic(char nomfic[50])
{
    File*f = fopen(nomfic ,"L");


}

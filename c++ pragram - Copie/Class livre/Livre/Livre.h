#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED
#include <string>
class Livre
{
private:
    int code;
    char titre[50];
public:
    Livre();
    int getcode();
    void setcode(int code);
    char gettitre();
    void settitre(char titre[50]);
    Livre(int code, char titre[50]);
    int operator == (const Livre &l) const;
    Livre(Livre &l);
    void ecrirefic(char nomfic[50]);


};



#endif // LIVRE_H_INCLUDED

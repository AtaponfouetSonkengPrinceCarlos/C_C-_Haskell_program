#include <iostream>
#include "Livre.h"


using namespace std;

int main()
{
    Livre L1,L2;
    L1.setcode(129);
    L2.setcode(127);
    operator ==(L1);
    Livre L1(L2);
    return 0;
    cout << L1 << endl;
}

#include <iostream>

using namespace std;

int ilosc_zl = 0, kieszonkowe =2;

int main()
{
    cout << "**zad5**" << endl;

    for(int i = 0; i<10; i++){
        ilosc_zl+=kieszonkowe;
        kieszonkowe*=2;
    }
    cout<<ilosc_zl;
    return 0;
}

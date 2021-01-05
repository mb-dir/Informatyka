#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    fstream dane;
    string linia, slowo;
    int klucz;

    dane.open("./dane_6_2.txt");

    while(!dane.eof()){
        getline(dane, linia);

        stringstream sString(linia);

        sString >> slowo;
        sString >> klucz;

        cout<<slowo<<" | ";
        cout<<klucz<<endl;
    }

    dane.close();
    return 0;
}

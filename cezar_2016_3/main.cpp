#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

    fstream dane;
    string linia, slowo, szyfrogram;
    dane.open("./dane_6_3.txt", ios::in);

    while(!dane.eof()){
        getline(dane, linia);
        stringstream sString(linia);

        sString >> slowo;
        sString >> szyfrogram;

        cout<<slowo<<" ";
        cout<<szyfrogram<<endl;
    }

    dane.close();

    getchar();
    getchar();
    getchar();
    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string linia;

string w1,w2;

int main()
{
    fstream zad;
    zad.open("dane_6_3.txt", ios::in);

    while(!zad.eof()){
        getline(zad, linia);
        stringstream sString(linia);
        sString>>w1;
        sString>>w2;

        cout<<w1<<" "<<w2<<endl;
    }

    zad.close();
    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string linia;

string slowa[3000];
int klucz[3000];

int main()
{
    fstream zad;

    zad.open("dane_6_2.txt", ios::in);
    int i = 0;
    while(!zad.eof()){
        getline(zad, linia);
        stringstream sString(linia);
        sString>>slowa[i];
        sString>>klucz[i];
        i++;
    }
    zad.close();

    for(int i = 0; i < 3000; i++){
        cout<<slowa[i]<<" "<<klucz[i]<<endl;
    }

    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string linia;

string slowa[3000];
int klucz[3000];

void cezar(string slowo, int klucz){
    int k = klucz%26;

    for(int i = 0; i < slowo.length(); i++){
        if(int(slowo[i]-k < 65)){
            slowo[i] = slowo[i]-k+26;
        }else{
            slowo[i] = slowo[i]-k;
        }
    }
    cout<<slowo;
}

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


    return 0;
}

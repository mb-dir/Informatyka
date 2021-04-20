#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string linia;

string slowo;
int klucz;

string cezar(string slowo, int klucz){
    int k = klucz%26;

    for(int i = 0; i < slowo.length(); i++){
        if(int(slowo[i]-k < 65)){
            slowo[i] = slowo[i]-k+26;
        }else{
            slowo[i] = slowo[i]-k;
        }
    }
    return slowo;
}

int main()
{
    fstream zad;
    fstream odp;

    zad.open("dane_6_2.txt", ios::in);
    odp.open("dane_6_2_wyniki.txt", ios::out);
    while(!zad.eof()){
        getline(zad, linia);
        stringstream sString(linia);
        sString>>slowo;
        sString>>klucz;

        odp<<cezar(slowo, klucz)<<endl;
    }
    zad.close();
    odp.close();


    return 0;
}

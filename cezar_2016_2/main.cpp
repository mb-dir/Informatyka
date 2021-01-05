#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string odszyfrowanie_cezar(string slowo, int klucz){
    int k = klucz%26;

    for(int i = 0; i <= slowo.length()-1; i++){
        if(slowo[i]-k < 65){
            slowo[i] = slowo[i]-k+26;
        }else{
            slowo[i] = slowo[i]-k;
        }
    }
    return slowo;
}
int main()
{
    fstream dane, wynik;
    string linia, slowo;
    int klucz;

    dane.open("./dane_6_2.txt", ios::in);
    wynik.open("./wyniki_6_2.txt", ios::out);

    while(!dane.eof()){
        getline(dane, linia);

        stringstream sString(linia);

        sString >> slowo;
        sString >> klucz;

        wynik<<odszyfrowanie_cezar(slowo, klucz)<<endl;
    }

    dane.close();
    return 0;
}

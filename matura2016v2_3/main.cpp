#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;

string linia;

string w1,w2;

string cezar(string a, int klucz){
    int k = klucz%26;
    for(int i = 0; i < a.length(); i++){
        if(int(a[i] + k) > 90){
            a[i] = a[i]+k-26;
        }else{
            a[i] = a[i]+k;
        }
    }
    return a;
}

bool czy_cezar_ok(string w1, string w2){
    for(int i = 0; i <=26; i++){
        if(cezar(w1, i) == w2){
            return true;
        }
    }
    return false;
}

int main()
{
    fstream zad;
    zad.open("dane_6_3.txt", ios::in);

    while(!zad.eof()){
        getline(zad, linia);
        stringstream sString(linia);
        sString>>w1;
        sString>>w2;

        if(czy_cezar_ok(w1,w2) == false){
            cout<<w1<<" "<<w2<<" zly"<<endl;
        }

    }
    zad.close();
    return 0;
}

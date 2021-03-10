#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;
int tab[2];
string s;

//przyk³ad pierwszy - sprawdziæ, czy druga liczba jest kwadretem pierwszej
bool przyklad_1(int a, int b){
    if(a*a == b){
        return true;
    }else{
        return false;
    }
}

int main()
{
    fstream dane;
    fstream dane_zapis;

    dane.open("./dane.txt", ios::in);
    dane_zapis.open("./dane_zapis.txt", ios::out);

    while(!dane.eof()){
        getline(dane,s);
        stringstream sString(s);
        sString >> tab[0];
        sString >> tab[1];
        if(przyklad_1(tab[0], tab[1])){
            dane_zapis<<tab[0]<<" "<<tab[1]<<endl;
        }
    }


    dane.close();
    dane_zapis.close();
    return 0;
}

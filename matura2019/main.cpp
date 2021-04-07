#include <iostream>
#include <fstream>

using namespace std;

string liczba;
string tab_liczby_string[500];
int tab[500];

int jd = 0;

bool czy_pot_3(int a){
    int b = 1;
    for(int i = 1; i < 12; i++){
        if(a == b){
            return true;
        }
        b*=3;
    }
    return false;
}
int main()
{
    fstream liczby;
    liczby.open("./liczby.txt", ios::in);

    while(!liczby.eof()){
        getline(liczby, liczba);
        tab_liczby_string[jd] = liczba;
        jd++;
    }
    liczby.close();

    for(int i = 0; i<500; i++){
        tab[i] = std::stoi(tab_liczby_string[i]);
    }


    int ile_spelnia_warunek = 0;
    for(int i = 0; i<500; i++){
        if(czy_pot_3(tab[i])){
            ile_spelnia_warunek++;
        }
    }
    cout<<ile_spelnia_warunek;
    return 0;
}

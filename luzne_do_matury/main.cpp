#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

void from_dec(int liczba, int system){
    string nowa_liczba;

    while(liczba > 0){
        int cyfra = liczba%system;

        if(cyfra < 10){
            nowa_liczba=char('0'+cyfra) + nowa_liczba;
        }else{
            nowa_liczba=char('A'-10+cyfra) + nowa_liczba;
        }

        liczba/=system;
    }
    cout<<nowa_liczba;
}
int tab[7] = {100, 50, 20, 10, 5, 2, 1};

void zachlanne(int liczby[], int kwota){
    for(int i = 0; i < 7; i++){
        int x = kwota/liczby[i];
        cout<<x<<" - "<<tab[i]<<endl;

        kwota = kwota - (tab[i]*x);
    }
}

void to_dec(string liczba, int system){
    int p = 1;
    int x;
    int wynik = 0;

    for(int i = liczba.length()-1; i >=0; i--){
        if( (int)liczba[i] > 48 && (int)liczba[i] < 58){
            x = int(liczba[i]);
        }else{
            x = int(liczba[i]-55);
        }
        wynik+=x*p;
        p*=system;
    }

    cout<<wynik;
}

int main()
{
    to_dec("AB", 16);

    return 0;
}

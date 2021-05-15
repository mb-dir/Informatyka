#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int dl_liczby(int x){
    int s = 0;

    while(x){
        x/=10;
        s++;
    }
    return s;
}


int potega(int podstawa, int wykladnik){
    if(wykladnik == 0){
        return 1;
    }else{
        return potega(podstawa, wykladnik-1)*podstawa;
    }
}

void to_dec(int a, int system){
    int dl = dl_liczby(a);
    int dl_temp = dl;
    int tab_potegi[dl];
    for(int i = 0; i < dl; i++){
        tab_potegi[i] = potega(system, dl_temp-1);
        dl_temp--;
    }

    //rozbijane liczby na cyfry

    int tab_cyfry[dl];
    int a_temp = a;
    int dl_temp2 = dl-1;

    while(a_temp){
        tab_cyfry[dl_temp2] = a_temp%10;
        dl_temp2--;
        a_temp/=10;
    }


    int liczba_dec = 0;
    for(int i = 0; i < dl; i++){
        int x = tab_cyfry[i]* tab_potegi[i];

        liczba_dec+=x;
    }
    cout<<liczba_dec;
}


void from_dec(int liczba, int system){

    int dl;

    for(int i = 0; i <100; i++){
        if(liczba < potega(system, i)){
            dl=i;
            break;
        }
    }

    int potegi[dl];
    int nowa_liczba[dl];

    for(int i = 0; i < dl; i++){
        potegi[i] = potega(system, i);
    }

    for(int i = dl-1; i >-1; i--){
        int x;
        x = liczba/potegi[i];
        nowa_liczba[i] = x;
        liczba-=potegi[i]*x;
    }


    for(int i = dl-1; i >-1; i--){
        cout<<nowa_liczba[i];
    }

}

int main()
{
    from_dec(137, 4);
    return 0;
}

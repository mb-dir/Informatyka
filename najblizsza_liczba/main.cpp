#include <iostream>

using namespace std;
int wartosc,a,b;

int bezwzgl(int x){
    if(x < 0){
        return -x;
    }else{
        return x;
    }
}

void najblizsza_ze_zbioru(int* tablica, int dlugosc_tab, int a){
    //a to wartosc do ktorej szukamy najblizszej liczby
    int najblizsza_index, bf = a - tablica[0];

    for(int i = 1; i < dlugosc_tab; i++){
        if(bezwzgl(a - tablica[i]) < bf){
            bf = a - tablica[i];
            najblizsza_index = i;
        }
    }

    cout<<"Z podanego zbioru najblizsza liczba jest: "<<tablica[najblizsza_index];
}


int tab[10] = {1,11,2,12,14,77,12,66,164,90};

int main()
{
    cout << "Podaj liczbe :" << endl;
    cin>>wartosc;

    cout<<"Podaj dwie pozostale: "<<endl;
    cin>>a>>b;

    if(bezwzgl(wartosc - a) < bezwzgl(wartosc - b)){
        cout<<"Liczbie "<<wartosc<<" blizej do "<<a;
    }else if(bezwzgl(wartosc - a) == bezwzgl(wartosc - b)){
        cout<<"Ta sama odleglosc"<<endl;
    }else{
        cout<<"Liczbie "<<wartosc<<" blizej do "<<b<<endl;
    }

    //Funkcja znajdujaca najblizsza liczbe w zbiorze
    najblizsza_ze_zbioru(tab, 10, -1);
    return 0;
}

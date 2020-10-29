#include <iostream>

using namespace std;

int liczba;

void zamiana(int liczba_do_zamiany){
    //-1 zeby w petli zaczynalo sie od 0
    int i = -1, tab[20];
    while(liczba_do_zamiany){
        //i++ czyli i = 0
        i++;
        tab[i] = liczba_do_zamiany%2;
        liczba_do_zamiany/=2;
    }
    for(int k = i; k>=0; k--){
        cout<<tab[k];
    }
}

int main()
{
    cout << "Podaj liczbe:" << endl;
    cin>>liczba;
    zamiana(liczba);
    return 0;
}

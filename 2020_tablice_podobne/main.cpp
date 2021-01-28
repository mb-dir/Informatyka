#include <iostream>

using namespace std;

int n = 5;
int k = 3;
int tab1[5] = {10,9,12,10,9};
int tab2[5] = {10,10,9,9,12};

void wypisz_czy_tablice_podobne(){
    for (int i = 0; i < k; i++){
        if(tab1[i] != tab2[i+n-k]){
            cout<<"FALSZ";
            return;
        }
    }
    for (int i = 0; i < n-k; i++){
        if(tab1[k+i] != tab2[i]){
            cout<<"FALSZ";
            return;
        }
    }
    cout<<"PRAWDA";
}

int main()
{
    wypisz_czy_tablice_podobne();
    return 0;
}

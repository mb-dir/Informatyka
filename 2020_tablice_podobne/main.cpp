#include <iostream>

using namespace std;

int n = 5;
int k = 3;
int tab1[5] = {10,9,12,10,9};
int tab2[5] = {10,10,9,9,12};

bool wypisz_czy_tablice_podobne(int k){
    for (int i = 0; i < k; i++){
        if(tab1[i] != tab2[i+n-k-1]){
            return false;
        }
    }
    for (int i = 0; i < n-k; i++){
        if(tab1[k+i] != tab2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    cout<<wypisz_czy_tablice_podobne(3);
    //zad2
    for(int i = 0; i < n; i++){
        if(wypisz_czy_tablice_podobne(i)){
            cout<<i;
        }else{
            cout<<"N";
        }
    }
    return 0;
}

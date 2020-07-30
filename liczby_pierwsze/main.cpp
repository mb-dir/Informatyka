#include <iostream>
#include <math.h>
using namespace std;

bool czy_pierwsza(int liczba){
    if(liczba < 2){
        return false;
    }else{
        for(int i = 2; i <= sqrt(liczba); i++){
            if(liczba % i == 0){
                return false;
            }
        }
        return true;
    }
}
//Tablica do zad #1 - znajdz liczby pierwsze w zbiorze
int tab[13] = {-1,-7,-22,0,1,2,3,4,5,55,89,113,1001};

int main()
{
    cout<<"Liczby pierwsze w podanym zbiorze to: "<<endl;
    for(int i = 0; i < 13; i++){
        if(czy_pierwsza(tab[i])){
           cout<<tab[i]<<endl;
        }
    }
    return 0;
}

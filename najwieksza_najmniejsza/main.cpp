#include <iostream>

using namespace std;

int tablica_liczb[10] = {1,-2,-2,112,-3,1,2,-3,4,178};
int najwieksza, najmniejsza;

void znajdz_najwieksza(int *tab){
    najwieksza = tab[0];
    for(int i = 0; i < 10; i++){
        if(najwieksza < tab[i]){
            najwieksza = tab[i];
        }
    }
}

void znajdz_najmniejsza(int *tab){
    najmniejsza = tab[0];
    for(int i = 0; i < 10; i++){
        if(najmniejsza > tab[i]){
            najmniejsza = tab[i];
        }
    }
}

int main()
{
    znajdz_najwieksza(tablica_liczb);
    znajdz_najmniejsza(tablica_liczb);
    cout<<"Najwieksza liczba to: "<<najwieksza<<endl;
    cout<<"Najmniejsza liczba to: "<<najmniejsza;
    return 0;
}

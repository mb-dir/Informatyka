#include <iostream>
#include <math.h>
//wstep do tego zadania - https://pl.spoj.com/problems/PZPI3/
using namespace std;

int a;

void solve(int a){
    float pierwiastek = sqrt(a);
    float suma_dzielnikow = 0;
    float ile_dzielnikow = 0;
    for(int i = 2; i <=a/2; i++){
        if(a%i == 0){
            suma_dzielnikow+=i;
            ile_dzielnikow++;
        }
    }
    float srednia_arytm = suma_dzielnikow/ile_dzielnikow;

    if(srednia_arytm <= pierwiastek){
        cout<<"Liczba znaczaca";
    }else{
        cout<<"Liczba nie jest liczba znaczaca";
    }
}

int main()
{
    cin>>a;
    solve(a);
    return 0;
}

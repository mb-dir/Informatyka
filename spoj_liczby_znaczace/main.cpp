#include <iostream>
#include <math.h>

using namespace std;

bool czyZnaczaca(int a){
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
        return true;
    }else{
        return false;
    }
}

void solve(int a, int b){
    int ile = 0;
    for(int i = a; i <=b; i++){
        if(czyZnaczaca(i)){
            ile++;
        }
    }
    cout<<ile<<endl;
}

int t;

int main()
{
    cin>>t;
    int tab[2*t];

    for(int i = 0; i < 2*t; i+=2){
        cin>>tab[i]>>tab[i+1];
    }
    for(int i = 0; i < 2*t; i+=2){
        solve(tab[i],tab[i+1]);
    }
    return 0;
}

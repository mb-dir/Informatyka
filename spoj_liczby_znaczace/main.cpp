#include <iostream>
#include <math.h>

using namespace std;

bool czyPierwsza(int a){
    if(a == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(a); i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

void solve(int a, int b){
    int ile = 0;
    for(int i = sqrt(a); i < sqrt(b); i++){
        if(czyPierwsza(i)){
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

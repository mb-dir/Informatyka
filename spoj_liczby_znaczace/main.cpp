#include <iostream>
#include <math.h>

using namespace std;

bool czyPierwsza(long long a){
    for(int i = 2; i < sqrt(a); i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

void solve(long long a, long long b){
    long long ile = 0;
    for(long long i = a; i <=b; i++){
        if(czyPierwsza(i)){
            ile++;
        }
    }
    cout<<ile<<endl;
}

long long t;

int main()
{
    cin>>t;
    long long tab[2*t];

    for(long long i = 0; i < 2*t; i+=2){
        cin>>tab[i]>>tab[i+1];
    }
    for(long long i = 0; i < 2*t; i+=2){
        solve(tab[i],tab[i+1]);
    }
    return 0;
}

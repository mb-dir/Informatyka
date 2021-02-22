#include <iostream>

using namespace std;

int n,t;

long double silnia(int a){
    if(a <= 1){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

void liczba_jednosci_dziesiatek(int a){
    int tab[2];
    for(int i = 0; i < 2; i++){
        tab[i] = a%10;
        a/=10;
    }
    cout<<tab[1]<<" "<<tab[0]<<endl;
}

int main()
{
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>t;
        if(t < 10){
            liczba_jednosci_dziesiatek(silnia(t));
        }else{
            cout<<"0"<<" "<<"0"<<endl;
        }
    }
    return 0;
}

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
    for(int i = 0; i < 2; i++){
        if(i!=1){
            cout<<a%10<<" ";
        }else{
            cout<<a%10<<endl;
        }
        a/=10;
    }
}

int main()
{
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>t;
        liczba_jednosci_dziesiatek(silnia(t));
    }
    return 0;
}

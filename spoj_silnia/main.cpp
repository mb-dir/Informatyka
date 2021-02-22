#include <iostream>

using namespace std;

int n;

long double silnia(int a){
    if(a <= 1){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

void liczba_jednosci_dziesiatek(int a){
    for(int i = 0; i < 2; i++){
        cout<<a%10<<" ";
        a/=10;
    }
}

int main()
{
    cin>>n;
    liczba_jednosci_dziesiatek(silnia(n));
    return 0;
}

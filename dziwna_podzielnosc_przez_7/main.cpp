#include <iostream>

using namespace std;

int n, dwie_ostatnie, dwie_ostatnie_mod_suma=0;

int main()
{
    cout << "Podaj liczbe" << endl;
    cin>>n;
    while(n){
        dwie_ostatnie = n%100;
        dwie_ostatnie_mod_suma += dwie_ostatnie%7;
        n=(n/100)*2;
    }

    if(dwie_ostatnie_mod_suma%7==0){
        cout<<"PRAWDA"<<endl;
    }else{
        cout<<"FALSZ"<<endl;
    }

    return 0;
}

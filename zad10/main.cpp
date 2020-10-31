#include <iostream>

using namespace std;

int m,n,r;

int main()
{
    cout << "**zad10**" << endl;
    cout<<"Podaj wartosc pierwszego elementu: "<<endl;
    cin>>m;
    cout<<"Podaj ilosc wyrazow ciagu: "<<endl;
    cin>>n;
    cout<<"Podaj roznice ciagu: "<<endl;
    cin>>r;
    cout<<"******"<<endl;
    for(int i = 0; i < n; i++){
        cout<<m<<endl;
        m+=r;
    }
    return 0;
}

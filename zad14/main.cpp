#include <iostream>

using namespace std;

int a, s=0;

int silnia(int liczba){
    if(liczba <=1 ){
        return 1;
    }else{
        return liczba*silnia(liczba-1);
    }
}

int main()
{
    cout << "**zad14**" << endl;
    cout<<"Podaj liczbe";
    cin>>a;

    for(int i = 1; i < a; i++){
        s+=silnia(i);
    }

    cout<<a<<"! = "<<silnia(a)<<endl;
    cout<<"suma silni poszczegonych liczb od 1 do tej liczby: "<<s;
    return 0;
}

#include <iostream>

using namespace std;

int a;

int silnia(int liczba){
    if(liczba <=1 ){
        return 1;
    }else{
        return liczba*silnia(liczba-1);
    }
}
int main()
{
    cout << "**zadanie nr 13**" << endl;

    cout<<"Podaj liczbe: ";
    cin>>a;
    cout<<a<<"! = "<<silnia(a);
    return 0;

}

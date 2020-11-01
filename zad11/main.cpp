#include <iostream>

using namespace std;

int a,b;

int main()
{
    cout << "**zad11**" << endl;
    while(true){
        cout<<"Podaj pierwsza liczba: "<<endl;
        cin>>a;
        cout<<"Podaj druga liczba: "<<endl;
        cin>>b;
        cout<<a+b<<endl;
        if((a+b) == 0){
            cout<<"suma rowna 0 - program przestaje dzialac"<<endl;
            return false;
        }
    }
    return 0;
}

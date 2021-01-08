#include <iostream>

using namespace std;
int x, suma_dzielnikow=1, liczba_do_sprawdzenia, liczba_do_sprawdzenia_suma_dzielnikow=1;
int main()
{
    cout << "liczba" << endl;
    cin>>x;

    for(int i = 2; i <= (x/2); i++){
        if(x%i == 0){
            suma_dzielnikow+=i;
        }
    }

    liczba_do_sprawdzenia = suma_dzielnikow-1;

    for(int i = 2; i <= (liczba_do_sprawdzenia/2); i++){
        if(liczba_do_sprawdzenia%i == 0){
            liczba_do_sprawdzenia_suma_dzielnikow+=i;
        }
    }


    if(liczba_do_sprawdzenia_suma_dzielnikow-1 == x){
        cout<<liczba_do_sprawdzenia;
    }else{
        cout<<"Nie";
    }

    getchar();
    getchar();
    getchar();
    return 0;
}

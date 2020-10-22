#include <iostream>

using namespace std;

int liczba;

//funkcja pomocnicza do wyliczenia sumy cyfr liczby
int suma(int liczba){
    int wynik = 0;
    while (liczba > 0){
        wynik += liczba%10;
        liczba /= 10;
    }
    return wynik;
}
int main()
{
    cout << "Podaj liczbe" << endl;
    cin >>liczba;

    for(int i = 0; i <= 36 ; i++){
        int a = liczba - i;
        int suma_a = suma(a);

        if(a + suma_a == liczba){
            cout<<"TAK, poniewaz: "<<endl;
            cout<<a<<" + "<< suma_a<<" = "<<liczba;
            break;
        }
    }

    return 0;
}

#include <iostream>

using namespace std;

//zadanie 2 - lekka modyfikacja, uzytkownik moze podac sume ilu kolejncyh liczb chce otrzymac
int ile;
int suma_zad_2(int ile){
    int suma = 0;
    for(int i = 1; i<=ile; i++){
        suma +=i;
    }
    return suma;
}


//zadanie 3
int suma_parzystych_zad_3(){
    int a;
    for(int i = 0, k = 2; i<10; i++, k+=2){
        a+=k;
    }
    return a;
}
int main()
{
    //ZADANIE 1
    cout << "**zadanie 1**" << endl;
        for(int i = 1; i <=10; i++){
        cout<<i<<endl;
    }

    //ZADANIE 2
    cout << "**zadanie 2**" << endl;
    cout << "podaj ile kolejnych liczb ma byc zsumowane" << endl;
    cin>>ile;
    cout<<suma_zad_2(ile)<<endl;


    //ZADANIE 3
    cout << "**zadanie 3**" << endl;
    cout<<suma_parzystych_zad_3()<<endl;

    return 0;
}

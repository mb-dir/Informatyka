#include <iostream>

using namespace std;

int cena, kola, rama;
string material, rodzaj;

// deklaracja klasy
struct rower {
    string rodzaj = "gorski";
    int rozmiar_ramy = 2;
    int rozmiar_kol = 2;
    string material_ramy = "Dobry";
    float cena = 2212;

    void pokaz_informacje(){
        cout<<"Cena: "<<cena<<endl;
        cout<<"Rodzaj: "<<rodzaj<<endl;
        cout<<"Rama: "<<rozmiar_ramy<<endl;
        cout<<"Kola: "<<rozmiar_kol<<endl;
        cout<<"Rama material: "<<material_ramy<<endl;
    }
};

int main()
{

    cout<<"Podaj cene: ";
    cin>>cena;

    cout<<"Podaj rozmiar kol: ";
    cin>>kola;

    cout<<"Podaj rozmiar ramy: ";
    cin>>rama;

    cout<<"Podaj material ramy: ";
    cin>>material;

    cout<<"Podaj rodzaj roweru: ";
    cin>>rodzaj;

    cout<<endl;
    //tworzenie obiektu
    rower moj_rower;

    moj_rower.cena = cena;
    moj_rower.rozmiar_kol = kola;
    moj_rower.rozmiar_ramy = rama;
    moj_rower.material_ramy = material;
    moj_rower.rodzaj = rodzaj;

    moj_rower.pokaz_informacje();

    return 0;
}

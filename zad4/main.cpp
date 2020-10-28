#include <iostream>

using namespace std;

int ile_dni_oszczedza;
int licz_ile_zaoszczedzi(int ile_dni_oszczedza){
    int suma=0;

    for(int i = 0, k=2; i<ile_dni_oszczedza; i++, k+=2){
        suma+=k;
    }
    return suma;
}

int main()
{
    cout << "**zadanie 4**" << endl;
    cout<<"Przez ile dni syn otrzymuje kieszonkowe"<<endl;
    cin>>ile_dni_oszczedza;
    cout<<licz_ile_zaoszczedzi(ile_dni_oszczedza);
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
//Zmienne reprezentujace wspolczynniki trojmianu
float a=0,b=0,c=0;

/*FUNKCJE POMOCNOCZE*/

//funkcja do liczenia delty
float wylicz_delte(float a, float b, float c){
    float delta = (b*b) - (4*a*c);

    return delta;
}

//funkcja do liczenia pierwiasta z delty
float pierwiastek_z_delty(float delta){
    return sqrt(delta);
}

//funkcja do liczenia p
float licz_p(float b, float a){
    return (-b)/(2*a);
}
//funkcja do liczenia q
float licz_q(float delta, float a){
    return (-delta)/(4*a);
}

void delta_funkcja(float a, float b, float c){
    if(a == 0){
        cout<<"To nie funkcja kwadratowa!";
        return;
    }

    float delta = wylicz_delte(a,b,c);
    float pierwiastek_delta = pierwiastek_z_delty(delta);
    float p = licz_p(b,a);
    float q = licz_q(delta,a);

    //Liczenie miejsc zerowych
    if(delta >= 0){
        if(delta == 0){
            float x0 = (-b)/(2*a);
            cout<<"Tylko jedno miejsce zerowe: "<<x0<<endl;
            cout<<"Postac iloczynowa: "<<a<<"(x-"<<x0<<")^2"<<endl;
        }else{
            float x1 = (-b-pierwiastek_delta)/(2*a);
            float x2 = (-b+pierwiastek_delta)/(2*a);

            cout<<"Miejsca zerowe: "<<x1<<" "<<x2<<endl;
            cout<<"Postac iloczynowa: "<<a<<"(x-"<<x1<<")(x-"<<x2<<")"<<endl;
        }
    }else{
        cout<<"Nie ma miejsc zerowych"<<endl;
    }

    //Wypisywane informacji o delcie i pierwiastku
    cout<<"Delta wynosi: "<<delta<<endl;
    if(delta > 0){
        cout<<"Pierwiastek z delty to: "<<pierwiastek_delta<<endl;
    }else if(delta < 0){
        cout<<"Delta ujemna, nie mozna okreslic pierwiastka"<<endl;
    }else{
        cout<<"pierwiastek z delty = 0"<<endl;
    }

    // Informacje o p oraz q
    cout<<"wspolczynnik p = "<<p<<endl;
    cout<<"wspolczynnik q = "<<q<<endl;
    cout<<"postac kanoniczna: "<<a<<"(x-"<<p<<")^2+"<<q<<endl;
}

int main()
{
    cout << "Podaj wspolczynnik a: ";
    cin>>a;

    cout << "Podaj wspolczynnik b: ";
    cin>>b;

    cout << "Podaj wspolczynnik c: ";
    cin>>c;

    delta_funkcja(a,b,c);
    return 0;
}

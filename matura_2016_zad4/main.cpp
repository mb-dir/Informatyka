#include <iostream>

using namespace std;

int testx, testy;


bool czy_punkt_nalezy_do_kola(int x, int y){
    int r = 200, sx=200, sy=200;//to co wiemy z tresci zadania

    int warunek = ((x-sx)*(x-sx)+(y-sy)*(y-sy));
    if(warunek <= r*r){
        return true;
    }else{
        return false;
    }
}

int main()
{
    cout << "Podaj x punktu" << endl;
    cin>>testx;
    cout << "Podaj y punktu" << endl;
    cin>>testy;

    if(czy_punkt_nalezy_do_kola(testx, testy)){
        cout<<"ok";
    }
    return 0;
}

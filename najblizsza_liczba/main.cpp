#include <iostream>

using namespace std;
int wartosc,a,b;

int bezwzgl(int x){
    if(x < 0){
        return -x;
    }else{
        return x;
    }
}

int main()
{
    cout << "Podaj liczbe :" << endl;
    cin>>wartosc;
    cout<<"Podaj dwie pozostale: "<<endl;
    cin>>a>>b;

    if(bezwzgl(wartosc - a) < bezwzgl(wartosc - b)){
        cout<<"Liczbie "<<wartosc<<" blizej do "<<a;
    }else if(bezwzgl(wartosc - a) == bezwzgl(wartosc - b)){
        cout<<"Ta sama odleglosc"<<endl;
    }else{
        cout<<"Liczbie "<<wartosc<<" blizej do "<<b;
    }
    return 0;
}

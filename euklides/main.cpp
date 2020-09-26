#include <iostream>

using namespace std;

int x,y;

int euklides(int x, int y){
    int a;

    while(y!=0){
        a=y;
        y=x%y;
        x=a;
    }
    return x;
}

void nww(int x, int y){
    int nwd = euklides(x,y);

    cout<<(x*y)/nwd;
}
int main()
{
    cout << "Podaj dwie liczby do obliczenia NWD" << endl;
    cin>>x;
    cin>>y;

    cout<<euklides(x,y)<<endl;
    nww(x,y);
    return 0;
}

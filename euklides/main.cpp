#include <iostream>

using namespace std;

int x,y;

void euklides(int x, int y){
    int a;

    while(y!=0){
        a=y;
        y=x%y;
        x=a;
    }
    cout<<x;
}

int main()
{
    cout << "Podaj dwie liczby do obliczenia NWD" << endl;
    cin>>x;
    cin>>y;

    euklides(x,y);
    return 0;
}

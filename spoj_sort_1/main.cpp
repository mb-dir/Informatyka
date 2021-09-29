#include <iostream>

using namespace std;

int x[2];
int y[2];

int main()
{
    cout<<"Podaj x:";
    cin>>x[0]>>x[1];

    cout<<"Podaj y:";
    cin>>y[0]>>y[1];

    if(x[0]+x[1] > y[0]+y[1]){
        cout<<"punkt x jest dalej"<<endl;
    }else if(x[0]+x[1] < y[0]+y[1]){
        cout<<"punkt y jest dalej"<<endl;
    }else{
        cout<<"taka sama odleglosc"<<endl;
    }
    return 0;
}

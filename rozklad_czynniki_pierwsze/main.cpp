#include <iostream>

using namespace std;

int a, b=2;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>a;

    while(a){
        if(a%b==0){
            cout<<b<<endl;
            a=a/b;
        }else{
            b++;
        }
    }
    getchar();
    getchar();
    return 0;
}

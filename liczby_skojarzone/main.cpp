#include <iostream>

using namespace std;
int x, suma_dzielnikow=1;
int main()
{
    cout << "liczba" << endl;
    cin>>x;

    for(int i = 2; i <= (x/2); i++){
        if(x%i == 0){
            suma_dzielnikow+=i;
        }
    }

    cout<<suma_dzielnikow;

    getchar();
    getchar();
    getchar();
    return 0;
}

#include <iostream>

using namespace std;

int suma_cegiel = 0;

int main()
{
    cout << "**zad7**" << endl;

    for(int i = 10; i>=1; i--){
        suma_cegiel += i*i;
    }
    cout<<suma_cegiel;
    return 0;
}

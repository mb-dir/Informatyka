#include <iostream>

using namespace std;

int tab[500];

int main()
{
    int a;
    int suma = 0;
    int j = 0;
    while (cin >> a){
        tab[j] = a;
        j++;
    }

    for(int i = 0; i < j; i ++){
        suma+=tab[i];
        cout<<suma<<endl;
    }
    return 0;
}

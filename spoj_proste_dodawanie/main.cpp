#include <iostream>

using namespace std;

int n;

int main()
{
    cin>>n;

    int tabSum[n];

    for(int i = 0; i < n; i++){
        int a;
        int suma = 0;
        cin>>a;
        int tab[a];
        for(int j = 0; j < a; j++){
            cin>>tab[j];
        }
        for(int j = 0; j < a; j++){
            suma += tab[j];
        }

        tabSum[i] = suma;
    }
    for(int i = 0; i < n; i++){
        cout<<tabSum[i]<<endl;
    }
    return 0;
}

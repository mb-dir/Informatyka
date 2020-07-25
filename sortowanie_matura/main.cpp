#include <iostream>

using namespace std;

int tab[7] = {3,1,12,41,12, 1519, -12};

void sortowanie_babelkowe(int *tab, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(tab[j] > tab[j+1]){
                int bf = tab[j+1];//zamiana wartoœci
                tab[j+1] = tab[j];
                tab[j] = bf;
            }
        }
    }
}

int main()
{
    sortowanie_babelkowe(tab, 7);
    //wypisanie w celu upewnienia sie ze dziala
    for(int a = 0; a < 7; a++){
        cout<<tab[a]<<endl;
    }
    return 0;
}

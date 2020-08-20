#include <iostream>

using namespace std;

int tab[6] = {12,-2,4,3,17,16};

void sortowanie_babelkowe(int *tab, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(tab[j] > tab[j+1])
            {
                int bf = tab[j+1];//zamiana wartoœci
                tab[j+1] = tab[j];
                tab[j] = bf;
            }
        }
    }
}

void quicksort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while (tablica[i]<v) i++;
        while (tablica[j]>v) j--;
        if (i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }while (i<=j);

    if (j>lewy) quicksort(tablica,lewy, j);
    if (i<prawy) quicksort(tablica, i, prawy);
}

int main(){
    //sortowanie_babelkowe(tab, 6);

    /*for(int a = 0; a < 7; a++){
        cout<<tab[a]<<endl;
    }*/
    quicksort(tab, 0, 5);//5 - index ostatniego elementu tablicy
    for(int a = 0; a < 6; a++)
    {
        cout<<tab[a]<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int skalar, kolumny, wiersze, x;

int main()
{
    cout<<"Podaj skalar: ";
    cin>>skalar;

    cout<<"Ilosc kolumn: ";
    cin>>kolumny;

    cout<<"Podaj wierszy: ";
    cin>>wiersze;


    int tab[kolumny][wiersze];

    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            cout<<"Podaj element: ["<<i+1<<","<<j+1<<"]"<<endl;
            cin>>x;
            tab[j][i] = x;
        }
    }
    cout<<endl;
    cout<<"Macierz przed"<<endl;
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            if(j == kolumny - 1){
                cout<<tab[j][i]<<endl;
            }else{
                cout<<tab[j][i]<<" ";
            }
        }
    }
    cout<<endl;

    int tab_skalar[kolumny][wiersze];

    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            tab_skalar[j][i] = skalar*tab[j][i];
        }
    }

    cout<<endl;
    cout<<"Macierz po"<<endl;
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            if(j == kolumny - 1){
                cout<<tab_skalar[j][i]<<endl;
            }else{
                cout<<tab_skalar[j][i]<<" ";
            }
        }
    }

    return 0;
}

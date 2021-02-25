#include <iostream>
#include <cstdlib>

using namespace std;

int skalar = ( std::rand() % 50 ) + 1, kolumny =( std::rand() % 50 ) + 1, wiersze =( std::rand() % 50 ) + 1, x;

int main()
{
    cout<<"SKALAR: "<<skalar<<endl;

    int tab[kolumny][wiersze];

    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            tab[j][i] =( std::rand() % 50 ) + 1;
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

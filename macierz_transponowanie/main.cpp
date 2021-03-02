#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int kolumny, wiersze, x;

int main()
{
    //srand( time( NULL ) );
    //kolumny = ( std::rand() % 5 ) + 1;
    //wiersze = ( std::rand() % 5 ) + 1;

    cout<<"Ilosc kolumn: ";
    cin>>kolumny;

    cout<<"Podaj wierszy: ";
    cin>>wiersze;



    int tab[kolumny][wiersze];

    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            //tab[j][i] =( std::rand() % 50 ) + 1;

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

    int new_tab[wiersze][kolumny];

    for(int i = 0; i < kolumny; i++){
        for(int j = 0; j < wiersze; j++){
            new_tab[j][i] = tab[i][j];
        }
    }


        cout<<endl;
    cout<<"Macierz po"<<endl;
    for(int i = 0; i < kolumny; i++){
        for(int j = 0; j < wiersze; j++){
            if(j == wiersze - 1){
                cout<<new_tab[j][i]<<endl;
            }else{
                cout<<new_tab[j][i]<<" ";
            }
        }
    }
    return 0;
}

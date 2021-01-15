#include <iostream>

using namespace std;

int tab[10] {1,2,3,4,54,5,4,3,2,1};

void czy_lustrzane_odbicie(){
    for(int i = 0, j = 9; i<10; i++, j--){
        if(tab[i] != tab[j]){
            cout<<"Tablica nie jest symetryczna"<<endl;
            return;
        }
    }
    cout<<"Tablica jest symetryczna"<<endl;
}

int main()
{
    czy_lustrzane_odbicie();
    return 0;
}

#include <iostream>

using namespace std;

int silnia(int a){
    if(a < 2){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

void czy_parzysta(int a){
    if(a == 2 || a == 3){
        cout<<"TAK"<<endl;
        return;
    }else if(a == 1){
        cout<<"NIE"<<endl;
        return;
    }else{
        for(int i = 2; i*i <= a; i++){
            if(a%i == 0){
                cout<<"NIE"<<endl;
                return;
            }
        }
        cout<<"TAK"<<endl;
        return;
    }
}
int tab[5] = {5,2,1,17,17};

int main()
{
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 4; j++){
            if(tab[j] < tab[j+1]){
                int x = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = x;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        cout<<tab[i]<<endl;
    }
    czy_parzysta(1);
    czy_parzysta(2);
    czy_parzysta(3);
    czy_parzysta(4);
    czy_parzysta(5);
    czy_parzysta(6);
    czy_parzysta(7);
    czy_parzysta(8);
    czy_parzysta(9);
    czy_parzysta(11);

    return 0;
}

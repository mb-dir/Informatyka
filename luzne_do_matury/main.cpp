#include <iostream>

using namespace std;

int silnia(int a){
    if(a < 2){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

int potegowanie(int podstawa, int wykladnik){
    if(wykladnik == 0){
        return 1;
    }else{
        return potegowanie(podstawa, wykladnik-1)*podstawa;
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
    cout<<potegowanie(2, 10);

    return 0;
}

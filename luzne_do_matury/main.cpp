#include <iostream>

using namespace std;

int silnia(int a){
    if(a < 2){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

int tab[5] = {5,2,1,17,12};

int main()
{
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j++){
            if(tab[j] < tab[i]){
                int x = tab[j];
                tab[j] = tab[i];
                tab[i] = x;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        cout<<tab[i]<<endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int silnia(int a){
    if(a < 2){
        return 1;
    }else{
        return silnia(a-1)*a;
    }
}

void suma_cyfr(int a){
    int s = 0;
    while(a){
        s+=a%10;
        a/=10;
    }

    cout<<s;
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
    suma_cyfr(2137100);

    return 0;
}

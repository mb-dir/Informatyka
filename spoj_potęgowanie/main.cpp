//http://matematykainnegowymiaru.pl/open/lekcje.php?mode=pokaz&id=70
#include <iostream>

using namespace std;

long double potegowanie(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return potegowanie(a, --b) * a;
    }
}

int d,a,b;

int main()
{
    cin>>d;

    int tab[2*d];

    for(int i = 0; i < 2*d; i+=2){
        cin>>a>>b;
        tab[i] = a;
        tab[i+1] = b;
    }

    for(int i = 0; i < 2*d; i+=2){
        //ostatnia cyfra podstawy
        int x = tab[i]%10;
        if(x == 0){
            cout<<0<<endl;
        }else if(x == 1){
            cout<<1<<endl;
        }else if(x == 5){
            cout<<5<<endl;
        }else if(x == 6){
            cout<<6<<endl;
        }else if(x == 2){
            int tabl[4] = {2,4,8,6};
            int a = tab[i+1]%4;
            cout<<tabl[a-1]<<endl;
        }else if(x == 3){
            int tabl[4] = {3,9,7,1};
            int a = tab[i+1]%4;
            cout<<tabl[a-1]<<endl;
        }else if(x == 4){
            int tabl[2] = {4,6};
            int a = tab[i+1]%2;
            cout<<tabl[a-1]<<endl;
        }else if(x == 7){
            int tabl[4] = {7,9,3,1};
            int a = tab[i+1]%4;
            cout<<tabl[a-1]<<endl;
        }else if(x == 8){
            int tabl[4] = {8,4,2,6};
            int a = tab[i+1]%4;
            cout<<tabl[a-1]<<endl;
        }else if(x == 9){
            int tabl[2] = {9,1};
            int a = tab[i+1]%2;
            cout<<tabl[a-1]<<endl;
        }
    }
    return 0;
}

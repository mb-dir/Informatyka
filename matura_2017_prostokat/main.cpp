#include <iostream>

using namespace std;
int tab[10] = {4, 34, 16, 8, 6, 22, 14, 12, 2, 7};

int s, p=2, x=0, y=0;
int main()
{
    for(int i = 0; i < 10; i++){
        if(tab[i]%p!=0){
            if(tab[i] > x){
                y=x;
                x=tab[i];
            }else if(tab[i] > y && tab[i]!=x){
                y=tab[i];
            }
        }
    }

    s=x*y;
    cout<<s;

    getchar();
    getchar();
    getchar();
    getchar();
    return 0;
}

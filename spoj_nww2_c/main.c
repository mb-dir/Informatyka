#include <stdio.h>
#include <stdlib.h>


int nwd(int a, int b){
    while(a!=b){
        if(a > b){
            a = a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int a;
    scanf("%d", &a);

    int tab[a];

    for(int i = 0; i < a; i++){
        scanf("%d", &tab[i]);
    }

    int nwwArrLen = (a*(a-1))/2;

    int nwwArrValues[nwwArrLen];

    for(int i = 0; i < a-1; i++){
        for(int j = i+1; j < a; j++){
            int nww = (tab[i]*tab[j])/nwd(tab[i],tab[j]);
            nwwArrValues[i+j-1] = nww;
        }
    }

    for(int i = 0; i < nwwArrLen; i++){
        printf("%d\n", nwwArrValues[i]);
    }
    return 0;
}

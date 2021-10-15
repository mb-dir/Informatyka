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
    int n;

    scanf("%d",&n);
    for(int u = 0; u<n;u++){
        int a;
        scanf("%d", &a);

        unsigned long long int tab[a];

        for(int i = 0; i < a; i++){
            scanf("%llu", &tab[i]);
        }

        int nwwArrLen = (a*(a-1))/2;

        unsigned long long int nwwArrValues[nwwArrLen];

        for(int i = 0; i < a-1; i++){
            for(int j = i+1; j < a; j++){
                int nww = (tab[i]*tab[j])/nwd(tab[i],tab[j]);
                nwwArrValues[i+j-1] = nww;
            }
        }

        printf("%llu\n", (nwwArrValues[0]*nwwArrValues[1])/nwd(nwwArrValues[0], nwwArrValues[1]));
    }
    return 0;
}

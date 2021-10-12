#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve(int a){
    if(a == 1){
        printf("NIE\n");
        return;
    }else{
        for(int i = 2; i <= sqrt(a); i++){
            if(a % i == 0){
                printf("NIE\n");
                return;
            }
        }
        printf("TAK\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int b;
        scanf("%d", &b);
        solve(b);
    }
    return 0;
}

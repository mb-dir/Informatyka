#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i = 1; i < 11; i++){
        for(int j = 1; j < 11; j++){
            int liczba = i*j;
            if(liczba < 10){
              printf("%d  ",i*j);
            }else{
                printf("%d ",i*j);
            }
        }
        printf("\n");
    }

    return 0;
}

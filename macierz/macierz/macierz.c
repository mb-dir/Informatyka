﻿#include <stdlib.h>
#include <stdio.h>

int main()
{
    int A[3][3] = { 1,2,3,4,5,6,7,8,9 };
    int B[3][3] = { 9,8,7,6,5,4,3,2,1 };
    int C[3][3] = { 0 };
    int x = 0;
    int y = 0;
    for (int i=0, a = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            x += A[i][j]*B[a][j];
            a++;
            y = j;
        }
        C[i][y] = x;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

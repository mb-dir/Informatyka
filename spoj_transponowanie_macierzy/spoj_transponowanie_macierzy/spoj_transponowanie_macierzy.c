﻿#include <stdlib.h>
#include <stdio.h>

int main() {
	int a=0, b=0;
	scanf_s("%d %d", &a,&b);
	int* A = (int*)malloc(a * b * sizeof(int));

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			int c;
			scanf_s("%d", &c);
			*(A + i * b + j) = c;
		}
	}
	//printf("--orginalna--\n");
	//for (int i = 0; i < a; i++) {
	//	for (int j = 0; j < b; j++) {
	//		printf("%d ", *(A + i * b + j));
	//	}printf("\n");
	//}
	//printf("--transponowana--\n");
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			printf("%d ", *(A + j * b + i));
		}printf("\n");
	}

	return 0;
}
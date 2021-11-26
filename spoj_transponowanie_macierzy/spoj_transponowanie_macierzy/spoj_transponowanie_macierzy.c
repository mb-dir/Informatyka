#include <stdlib.h>
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

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%d ", *(A + i * b + j));
		}printf("\n");
	}

	return 0;
}
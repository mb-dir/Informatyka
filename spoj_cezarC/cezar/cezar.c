#include <stdio.h>
#include <stdlib.h>

int main() {
	char* w="dupa";
	int k;

	printf("Podaj przesuniecie: ");
	scanf_s("%d", &k);

	int key = k % 26;

	while(*w){
		int a = *w;
		if (a + key > 122) {
			a = a + key - 26;
		}
		else {
			a += key;
		}
		printf("%c", a);
		*w++;
	}
	return 0;
}

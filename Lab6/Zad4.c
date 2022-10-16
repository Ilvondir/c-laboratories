#include<stdio.h>

int najwieksza(int x, int y, int z) {	
	if (x>y && x>z) {
		printf("%d", x);
	} else if (z>y) {
		printf("%d", z);
	} else {
		printf("%d", y);
	}
}

int main() {
	
	int a, b, c;
	
	printf("Wpisz trzy liczby: ");
	scanf("%d%d%d", &a, &b, &c);
	
	najwieksza(a, b, c);
	
	return 0;
}

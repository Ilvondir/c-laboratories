#include<stdio.h>

int czyParzysta(int x) {	
	if (x%2==0) {
		printf("1");
		return 1;
	} else {
		printf("0");
		return 0;
	}
}

int main() {
	
	int y = 0;
	
	printf("Wpisz sprawdzana liczbe: ");
	scanf("%d", &y);
	
	czyParzysta(y);
	
	return 0;
}

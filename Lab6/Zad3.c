#include<stdio.h>

int modul(int x) {	
	if (x>=0) {
		printf("%d", x);
	} else {
		printf("%d", x*(-1));
	}
}

int main() {
	
	int y = 0;
	
	printf("Wpisz liczbe: ");
	scanf("%d", &y);
	
	modul(y);
	
	return 0;
}

#include<stdio.h>

int main() {
	int number;
	
	printf("Wprowadz swoja liczbe: ");
	scanf("%d", &number);
	
	printf("Liczba o 1 mniejsza od Twojej to: %d\nLiczba o 1 wieksza od Twojej to: %d", number-1, number+1);
		
	return 0;
}

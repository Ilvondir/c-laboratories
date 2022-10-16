#include<stdio.h>

int main() {
	int first, second;
	char sign;
	
	printf("Wpisz 1. liczbe: ");
	scanf("%d", &first);
	
	printf("Wybierz dzialanie(+, -, *, /): ");
	scanf(" %c", &sign);
	
	printf("Wpisz 2. liczbe: ");
	scanf("%d", &second);
	
	if (sign == '+') {
		printf("Suma: %d", first+second);
	} else if (sign == '-') {
		printf("Roznica: %d", first-second);
	} else if (sign == '*') {
		printf("Iloczyn: %d", first*second);
	} else if (sign == '/') {
		if (second == 0) {
			printf("Nie dziel przez 0!");
		} else {
			printf("Iloraz: %d", first/second);
		}
	} else {
		printf("Wskaz poprawny znak!");
	}
	
	return 0;
}

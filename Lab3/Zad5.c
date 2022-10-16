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
	
	switch(sign) {
		case '+':
			printf("Suma: %d", first+second);
			break;
		case '-':
			printf("Roznica: %d", first-second);
			break;
		case '*':
			printf("Iloczyn: %d", first*second);
			break;
		case '/':
			if (second == 0) {
				printf("Nie dziel przez 0!");
			} else {
				printf("Iloraz: %d", first/second);
			}
			break;
	}
	
	return 0;
}

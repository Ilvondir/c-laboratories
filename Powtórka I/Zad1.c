#include<stdio.h>
#include<math.h>

int main() {
	
	int first, second;
	char sign;
	
	printf("Wprowadz pierwsza liczba: ");
	scanf("%d", &first);
	
	printf("Wprowadz znak dzialania(+,-,*,/,^,%): ");
	scanf(" %c", &sign);
	
	printf("Wprowadz druga liczba: ");
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
			printf("Suma: %f", 1.0*first/second);
			break;
		case '^':
			printf("Wynik: %.0f", pow(first, second));
			break;
		case '%':
			printf("Reszta z dzielenia: %d", first%second);
			break;
		default:
			printf("Kalkulator nie obsluguje takiego dzialania.");
	}
	
	return 0;
}

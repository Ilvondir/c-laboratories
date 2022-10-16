#include<stdio.h>

int main() {
	int month;
	
	printf("Wpisz numer miesiaca: ");
	scanf("%d", &month);
	
	if (month == 1) {
		printf("Styczen");
	} else if (month == 2) {
		printf("Luty");
	} else if (month == 3) {
		printf("Marzec");
	} else if (month == 4) {
		printf("Kwiecien");
	} else if (month == 5) {
		printf("Maj");
	} else if (month == 6) {
		printf("Czerwiec");
	} else if (month == 7) {
		printf("Lipiec");
	} else if (month == 8) {
		printf("Sierpien");
	} else if (month == 9) {
		printf("Wrzesien");
	} else if (month == 10) {
		printf("Pazdziernik");
	} else if (month == 11) {
		printf("Listopad");
	} else if (month == 12) {
		printf("Grudzien");
	} else {
		printf("To nie jest miesiac");
	} 
	
	return 0;
}

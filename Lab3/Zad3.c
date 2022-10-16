#include<stdio.h>

int main() {
	int month;
	
	printf("Wpisz numer miesiaca: ");
	scanf("%d", &month);
	
	switch (month) {
		case 1:
			printf("Styczen");
			break;
		case 2:
			printf("Luty");
			break;
		case 3:
			printf("Marzec");
			break;
		case 4:
			printf("Kwiecien");
			break;
		case 5:
			printf("Maj");
			break;
		case 6:
			printf("Czerwiec");
			break;
		case 7:
			printf("Lipiec");
			break;
		case 8:
			printf("Sierpien");
			break;
		case 9:
			printf("Wrzesien");
			break;
		case 10:
			printf("Pazdziernik");
			break;
		case 11:
			printf("Listopad");
			break;
		case 12:
			printf("Grudzien");
			break;
		default:
			printf("Nie ma takiego miesiaca!");
			break;
	}
	
	return 0;
}

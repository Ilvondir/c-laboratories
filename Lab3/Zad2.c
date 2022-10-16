#include<stdio.h>

int main() {
	int month;
	
	printf("Wpisz numer miesiaca: ");
	scanf("%d", &month);
	
	month==1 ? printf("Styczen")
	: month==2 ? printf("Luty")
	: month==3 ? printf("Marzec")
	: month==4 ? printf("Kwiecien")
	: month==5 ? printf("Maj")
	: month==6 ? printf("Czerwiec")
	: month==7 ? printf("Lipiec")
	: month==8 ? printf("Sierpien")
	: month==9 ? printf("Wrzesien")
	: month==10 ? printf("Pazdziernik")
	: month==11 ? printf("Listopad")
	: month==12 ? printf("Grudzien") : printf("To nie jest miesiac");
	
	return 0;
}

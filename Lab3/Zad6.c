#include<stdio.h>

int main() {
	int cost, children;
	
	printf("Wpisz swoja ilosc oplat: ");
	scanf("%d", &cost);
	
	printf("Wpisz ilosc dzieci: ");
	scanf("%d", &children);
	
	if (children < 0) {
		
		printf("Nie jest to mozliwe!");
		
	} else {
	
		switch (children) {
			case 0:
				printf("Placisz: %d", cost);
				break;
			case 1:
				printf("Placisz: %d", 98*cost/100);
				break;
			case 2:
				printf("Placisz: %d", 95*cost/100);
				break;
			case 3:
				printf("Placisz: %d", 92*cost/100);
				break;
			default:
				printf("Placisz: %d", 85*cost/100);
				break;
		}
	
	}
	
	return 0;
}

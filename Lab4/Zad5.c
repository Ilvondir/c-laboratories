#include<stdio.h>

int main() {
	int x, y;
	
	printf("Podaj szerokosc swojej litery- musi byc ona wieksza od 3: ");
	scanf("%d", &x);
	
	while (x < 3) {
		printf("Szerokosc musi byc wieksza od 3, wybierz inna szerokosc: ");
		scanf("%d", &x);	
	}
	
	printf("Podaj wysokosc swojej litery, ale pamietaj, ze dla symetrii musi to byc liczba nieparzysta wieksza od 5: ");
	scanf("%d", &y);
	
	while (y%2 == 0 || y < 5) {
		printf("Wprowadzona wysokosc jest bledna, wprowadz ja raz jeszcze: ");
		scanf("%d", &y);
	}
	
	int center = (y+1)/2;
	
	printf("\n\n\n");
	
	int i;
	for (i=1;i<=y;i++) {
		
		if (i==1 || i==center || i==y) {
			
			int i2;
			for (i2=1;i2<=x;i2++) {
				printf("E");
			}
			
			printf("\n");
			
		} else {
			printf("E\n");
		}
		
	}
	
	return 0;
}

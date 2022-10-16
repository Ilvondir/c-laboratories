#include<stdio.h>

int main() {
	
	FILE *plik = fopen("Zad2.txt", "rt");
	
	int suma = 0;
	int counter = 0;
	int tab[250];
	
	while (feof(plik) == 0) {
		fscanf(plik, "%d", &tab[counter]);
		suma += tab[counter];
		counter++;
	}
	
	printf("Ilosc liczb: %d\n", counter);
	printf("Suma liczb: %d\n", suma);
	printf("Srednia liczb: %.2f\n\n\n", 1.0*suma/counter);
	
	printf("Lp.\tLiczba\n");
	int i;
	for (i=0;i<counter;i++) {
		printf("%d.\t%d\n", i+1, tab[i]);
	}
	
	fclose(plik);
	return 0;
}

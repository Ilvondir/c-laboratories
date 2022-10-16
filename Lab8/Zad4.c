#include<stdio.h>
#define n 10

int main() {
	
	int tab[n];
	int *wsk;
	
	int i;
	for(i=0;i<n;i++) {
		printf("Podaj %d. liczbe: ", i+1);
		scanf("%d", tab+i);
	}
	
	wsk = &tab;
	printf("Zerowy rekord: %d", *wsk);
	
	wsk = &tab[4];
	printf("\nPiaty rekord: %d", *wsk);
	
	for (wsk=tab;wsk<tab+n;wsk++) {
		printf("\nElement: %d", *wsk);
	}
	
	return 0;
}

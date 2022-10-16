#include<stdio.h>

int main() {
	
	FILE *plik;
	plik = fopen("plik.txt", "rt");
	
	char tablica[512];
	
	while (feof(plik)==0) {
		fgets(tablica, 512, plik);
		printf("%s", tablica);
	}
	
	fclose(plik);
	
	getchar();
	
	return 0;
}

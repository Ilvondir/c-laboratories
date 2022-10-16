#include<stdio.h>

int main() {
	
	//Pierwsza lekcja
	int numer = 114;
	printf("Hello world!\n");
	printf("Numer- %dA, obok jest numer %dB\n", numer, numer+1);
	int wyzej = 316;
	printf("Na trzecim pietrze jest pokoj %d\n", wyzej);
	int suma = numer + wyzej;
	printf("Razem to daje: %d + %d = %d\n\n", numer, wyzej, suma);
	
	//Druga lekcja
	char* towar = "Koszulka";
	char rozmiar = 'L';
	float cena = 129.99;
	double czynnik = 0.02322;
	
	printf("Towar: %s\n", towar);
	printf("Rozmiar: %c\n", rozmiar);
	printf("Cena: %gPLN\n", cena);
	printf("Cena: %fPLN\n", cena);
	printf("Cena: %.3fPLN\n", cena);
	printf("Czynnik: %g\n", czynnik);
	printf("Czynnik: %f\n", czynnik);
	printf("Czynnik: %.2f\n", czynnik);
	printf("Cena w promocji -30%: %gPLN\n", cena * 0.7);
	printf("Cena w promocji -30%: %.2fPLN\n\n", cena * 0.7);
	
	int point = 239;
	printf("System dziesietny: %d\n", point);
	printf("System osemkowy: %o\n", point);
	printf("System szesnastkowy: %x\n", point);
	
	char name[20];
	scanf("%s", &name);
	printf("Wpisane imiê to %s", name);
		
	return 0;
}

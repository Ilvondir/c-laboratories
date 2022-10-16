#include<stdio.h>

struct zespolone {
	double re, im;
};

struct zespolone dodaj(struct zespolone liczba1, struct zespolone liczba2) {
	
	struct zespolone suma;
	
	suma.re = liczba1.re + liczba2.re;
	suma.im = liczba1.im + liczba2.im;
	
	return suma;
}


int main() {
	
	struct zespolone liczba1, liczba2;
	
	printf("Podaj czesc rzeczywista i urojona 1. liczby: ");
	scanf("%lf%lf", &liczba1.re, &liczba1.im);
	
	printf("Podaj czesc rzeczywista i urojona 2. liczby: ");
	scanf("%lf%lf", &liczba2.re, &liczba2.im);
	
	struct zespolone suma = dodaj(liczba1, liczba2);
	
	printf("\n\n%lf + %lfi", suma.re, suma.im);
	
	return 0;
}

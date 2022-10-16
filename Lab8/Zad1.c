#include<stdio.h>

int main() {
	
	short a, b, c;
	float x;
	short *wsk;
	
	printf("Adres zmiennej A: %u\n", &a);
	printf("Adres zmiennej B: %u\n", &b);
	printf("Adres zmiennej C: %u\n", &c);
	printf("Adres zmiennej X: %u\n", &x);
	printf("Adres zmiennej WSK: %u\n", &wsk);
	
	a, b, c = 0;
	b = 10;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	wsk = &b;
	*wsk = 20;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	wsk = &a;
	*(wsk-1) = 30;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	*(&a-1) = 40;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	*(&c+1) = 50;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	*((short *)&x+4) = 60;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	*((short *)(&x + 1) + 2) = 70;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	*((short *)&wsk + 10) = 80;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	*((short*)&wsk + 10) = 90;
	printf("\nA: %d, B: %d, C: %d", a, b, c);
	
	getchar();
	
	return 0;
}

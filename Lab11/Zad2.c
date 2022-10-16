#include<stdio.h>

struct trojkat {
	float a, b, c;
};

float obwod(struct trojkat rct) {
	
	float obw = rct.a + rct.b + rct.c;
	
	return obw;
}

int main() {
	
	int numerator;
	float a, b, c;
	
	do {
		printf("Wprowadz dlugosc 1. boku: ");
		scanf("%f", &a);
		printf("Wprowadz dlugosc 2. boku: ");
		scanf("%f", &b);
		printf("Wprowadz dlugosc 3. boku: ");
		scanf("%f", &c);
		
		if (a+b<=c || a+c<=b || b+c<=a) {
			printf("To nie jest trojkat!\n");
			numerator = 0;
		} else {
			numerator = 1;
		}
		
	} while (numerator == 0);
	
	struct trojkat rct = {a, b, c};
	
	printf("Obwod: %.2f", obwod(rct));
	
	return 0;
}

#include<stdio.h>
#include<math.h>

int main() {

	//Zad. 1
	printf("Hello world!\n\n");
	
	int myVariable = 10;
	printf("%d\n", myVariable);
	
	int wiek = 18;
	printf("Moj wiek to %d\n", wiek);
	wiek = 22;
	printf("Teraz moj wiek to %d\n", wiek);
	wiek++;
	printf("Teraz moj wiek to %d\n", wiek);
	
	int num;
	printf("Zmienna num to %d\n", num);
	scanf("%d", &num);
	printf("Teraz zmienna num to %d\n", num);
	
	if (10 > 5) {
		printf("Warunek jest prawdziwy\n");
	}

	
	
	//Zad. 2
	int zm1 = 1;
	char zm2 = 'L';
	float zm3 = 2.22;
	double zm4 = 2.123198;
	char* zm5 = "Zmienna napisowa";
	
	printf("%d\n", zm1);
	printf("%c\n", zm2);
	printf("%f\n", zm3);
	printf("%lf\n", zm4);
	printf("%s\n\n\n", zm5);
	
	
	
	//Zad. 3
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("Wynik tych liczb to %d\n\n\n", num1 + num2);
	
	
	
	//Zad. 4, 5
	int liczba;
	int count = 0;
	scanf("%d", &liczba);
	
	int p;
	for(p=2; p<liczba; p=p+1) {
		
		int dzielnik = liczba % p;
		
		if (dzielnik == 0) {
			count++;
			printf("Ta liczba nie jest pierwsza- dzieli sie np. przez %d\n\n\n", p);
			break;
		}
	}
	
	if (count == 0) {
		printf("Ta liczba jest pierwsza.\n\n\n");
	}
	
	
	
	//Zad. 6
	int wp;
	scanf("%d", &wp);
	
	if (wp >= 0) {
		printf("%d\n\n\n", wp);
	} else if (wp < 0) {
		printf("%d\n\n\n", wp * (-1));
	}
	
	
	
	//Zad. 8
	int a, b, c;
	printf("Wprowadz potrzebne dane: a, b, c\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	int delta = (b*b) - 4*a*c;
	
	if (delta < 0) {
		printf("Funkcja kwadratowa nie ma pierwiastkow");
	}
	
	if (delta == 0) {
		int pw = -b / 2*a;
		printf("Funkcja kwadratowa ma jeden pierwiastek: %d\n", pw);
	}
	
	if (delta > 0) {
		float pzd = sqrt(delta);
		float gw = (-b - pzd) / (2*a);
		float tw = (-b + pzd) / (2*a);
		printf("Funkcja kwadratowa ma dwa pierwiastki: %.1f i %.1f\n", gw, tw);
	}
	
	
	return 0;
}

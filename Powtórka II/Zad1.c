#include<stdio.h>

void calkowite(int calk) {
	if (calk==0) return;
	
	int mod = calk % 16;
	
	calkowite((calk-mod)/16);
	
	if (mod>=0 && mod<=9) {
		printf("%d", mod);
	} else {
		
		switch(mod) {
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			default:
				printf("F");
		}
	}
}

void rozwiniecie(double rozw) {
	
	if (rozw==0) return;
	
	double temp = rozw * 16;
	
	int ctemp = temp;
	
	if(ctemp>=0 && ctemp<=9) {
		printf("%d", ctemp);
	} else {
		
		switch(ctemp) {
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			default:
				printf("F");
		}
	}
	
	rozwiniecie(temp-ctemp);
	
}

int main() {
	
	double liczba;
	
	do {
		printf("Wprowadz liczbe do translacji: ");
		scanf("%lf", &liczba);
	} while (liczba<0);
	
	int calk = liczba;
	double rozw = liczba - calk;
	
	printf("Liczba %lf w postaci szesnastkowej to: ", liczba);
	calkowite(calk);
	printf(".");
	rozwiniecie(rozw);
		
	return 0;
}

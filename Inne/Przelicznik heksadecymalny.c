#include<stdio.h>

void hex(int n) {
	
	if (n==0) return;
	
	int temp = n%16;
	
	hex((n-temp)/16);
	
	if (temp>=0 && temp<=9) {
		
		printf("%d", temp);
	
	} else {
		
		switch(temp) {
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

int main() {
	
	int n;
	char quit;
	
	while (quit != 'Y') {
	
		printf("Podaj liczbe do przeliczenia na system 16owy: ");
		scanf("%d", &n);
		
		if (n==0) {
			printf("0");
		} else {
			hex(n);
		}
		
		printf("\n\nJesli chcesz wyjsc, wpisz Y, jesli nie to cokolwiek innego: ");
		scanf(" %c", &quit);
	
	}
	
	
	return 0;
}

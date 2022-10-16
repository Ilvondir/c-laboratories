#include<stdio.h>

int sequence(int n) {

	int an;
	
	if (n>1) {
		an = -1*sequence(n-1)*n-2;
	} else {
		return -1;
	}
	
	return an;
}

int main() {
	
	int n, a = 0;
	
	printf("Wprowadz szukany wyraz ciagu: ");
	scanf("%d", &n);
	
	if (n>0) {
		
		a = sequence(n);
		
		printf("Wartosc tego wyrazu ciagu to: %d", a);
		
	} else {
		printf("Ciagi nie posiadaja takich wyrazow.");
	}
	
	return 0;
}

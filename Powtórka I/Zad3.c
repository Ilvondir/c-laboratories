#include<stdio.h>

int factorial(int n) {
	if (n == 0) {
		return 1;
	} else if (n < 0) {
		return 0;
	} else {
		
		int i;
		int fact = 1;
		for (i=n;i>1;i--) {
			fact *= i;
		}
		
		return fact;
	}
}

int main() {
	
	int n;
	
	printf("Wprowadz liczbe: ");
	scanf("%d", &n);
	
	int result = factorial(n);
	
	if (result == 0) {
		printf("Wprowadzono bledna liczbe.");
	} else {
		printf("Silnia z %d to %d", n, result);
	}
	
	return 0;
}

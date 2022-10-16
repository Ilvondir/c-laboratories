#include<stdio.h>

int summation(int x) {
	
	int sum;
	
	if (x==0) return 0;
	
	sum = x%10 + summation(x/10);
	
	return sum;
}

int main() {
	
	int number, sum = 0;
	
	printf("Wprowadz swoja liczbe: ");
	scanf("%d", &number);
	
	sum = summation(number);
	
	printf("Suma cyfr liczby %d to %d.", number, sum);
	
	return 0;
}

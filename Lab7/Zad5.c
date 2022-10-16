#include<stdio.h>

int min(int n, int sum) {
	
	if (n == 0) return 0;
	
	int sign = n % 2;
	
	sum += min((n-sign)/2, 1);
	
	return sum;
}

int main() {
	
	int amount = min(10001, 1);
	
	printf("Minimalna ilosc zagran to: %d", amount);
	
	return 0;
}

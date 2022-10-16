#include<stdio.h>

int oct(int n) {
	
	if (n==0) return 0;
	
	
	int temp = n % 8;
	oct((n-temp)/8);
	printf("%d", temp);
	
}

int main() {
	
	int n;
	
	printf("Podaj liczbe do konwersji na system 8owy: ");
	scanf("%d", &n);
	
	int t = oct(n);
	
	if (t==0) printf("0");
	
	getchar(); getchar();
	
	return 0;
}

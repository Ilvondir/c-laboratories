#include<stdio.h>

void translation(int x) {
	
	if (x==0) return;
	int sign = x % 2;
	translation((x-sign)/2);
	printf("%d", sign);
	

}

int main() {
	
	printf("\nPRZELICZNIK BINARNY\n\n");
	
	int number = 0;
	
	printf("Wpisz liczbe do translacji: ");
	scanf("%d", &number);
	
	translation(number);
	
	return 0;
}

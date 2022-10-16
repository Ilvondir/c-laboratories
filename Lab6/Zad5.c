#include<stdio.h>
#include<math.h>

int potegowanie(int x, int n) {
	if (n > 0) {
		int l = pow(x, n);
		printf("%d", l);
	} else {
		printf("-1");
		return -1;
	}
}

int main() {
	
	int x, n;
	
	printf("Wpisz liczbe i jej potege: ");
	scanf("%d%d", &x, &n);
	
	potegowanie(x, n);
	
	return 0;
}

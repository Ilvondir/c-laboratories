#include<stdio.h>

int main() {
	
	int i;
	for (i=1;i<=1000;i++) {
		int e1 = i%3;
		int e2 = i%4;
		int e3 = i%5;
		int e4 = i%7;
		
		if (e1 == 0 && e2 == 0 && e3 ==0 && e4 == 0) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}

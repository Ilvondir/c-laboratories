#include<stdio.h>

int main() {
	
	int i, u, counter;
	
	for (i=1;i<=100;i++) {
		
		counter = 0;
		
		int i2;
		for (i2=2;i2<i;i2++) {
			
			u = i % i2;
			
			if (u == 0) {
				counter++;
			}
		}
		
		if (counter == 0) {
			printf("%d\n", i);
		}
		
	}
	
	return 0;
}

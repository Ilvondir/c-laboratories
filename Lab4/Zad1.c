#include<stdio.h>

int main() {
	
	int i;
	for (i=1;i<=100;i++) {
		//Parzyste
		if (i%2 == 0) printf("%d\n", i);
		
		//Nieparzyste
		//if (i%2 == 1) printf("%d\n", i);
		
	}
	
	return 0;
}

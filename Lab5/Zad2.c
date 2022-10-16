#include<stdio.h>

int main() {
	
	int tab[10][10];
	
	int i, i2;
	for (i=0;i<=9;i++) {
		
		for (i2=0;i2<=9;i2++) {
			
			tab[i][i2] = (i+1)*(i2+1);
			printf("%d\t", tab[i][i2]);
			
		}
		printf("\n\n");
		
	}

	return 0;
}

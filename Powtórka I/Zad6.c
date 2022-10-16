#include<stdio.h>

int main() {
	
	char tab[8][8] = {};
	
	int i, i2;
	for (i=0;i<8;i++) {
		for (i2=0;i2<8;i2++) {
			if ((i+i2)%2==1) {
				tab[i][i2] = '#';
			}
		}
	}
	
	for (i=0;i<8;i++) {
		for (i2=0;i2<8;i2++) {
			printf("%c", tab[i][i2]);
		}
		printf("\n");
	}
}

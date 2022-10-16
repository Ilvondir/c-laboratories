#include<stdio.h>

int main() {
	
	int M1[2][2], M2[2][2], M3[2][2] = {0};
	
	int i, i2;
	for (i=0;i<2;i++) {
		for (i2=0;i2<2;i2++) {
			printf("Wprowadz pole [%d][%d] pierwszej macierzy: ", i, i2);
			scanf("%d", &M1[i][i2]);
		}
	}
	
	for (i=0;i<2;i++) {
		for (i2=0;i2<2;i2++) {
			printf("Wprowadz pole [%d][%d] drugiej macierzy: ", i, i2);
			scanf("%d", &M2[i][i2]);
		}
	}
	
	for (i=0;i<2;i++) {
		for (i2=0;i2<2;i2++) {
			M3[i][i2] = M1[i][i2] + M2[i][i2];
		}
	}
	
	printf("\n\n");
	
	for (i=0;i<2;i++) {
		for (i2=0;i2<2;i2++) {
			printf("%d\t", M3[i][i2]);
		}
		printf("\n");
	}
	
	return 0;
}

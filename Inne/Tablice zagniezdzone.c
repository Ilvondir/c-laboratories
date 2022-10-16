#include<stdio.h>

int main() {
	
//	int M, N, P, Q;
//	
//	printf("Wprowadz wysokosc 1. tablicy: ");
//	scanf("%d", &M); 
//	
//	printf("Wprowadz szerokosc 1. tablicy: ");
//	scanf("%d", &N);
//	
//	int mainTab[M][N];
//	
//	int i, j, i2, j2;
//	for (i=0;i<M;i++) {
//		for (j=0;j<N;j++) {
//			printf("Wypelnij indeks o wspolrzednych [%d][%d]: ", i, j);
//			scanf("%d", &mainTab[i][j]);
//		}
//	}
//	
//	printf("\nGlowna tablica:\n");
//	for (i2=0;i2<M;i2++) {
//		for (j2=0;j2<N;j2++) {
//			printf("%d\t", mainTab[i2][j2]);
//		}
//		printf("\n");
//	}
//	
//	printf("\n");
//	
//	do {
//		printf("Wprowadz wysokosc 2. tablicy: ");
//		scanf("%d", &P); 
//		
//		if (P>M) printf("Wprowadzona liczba jest za wysoka!\n");
//	} while (P>M);
//	
//	do {
//		printf("Wprowadz szerokosc 2. tablicy: ");
//		scanf("%d", &Q); 
//		
//		if (Q>N) printf("Wprowadzona liczba jest za wysoka!\n");
//	} while (Q>N);
	
	int M=3, N=3, P=2, Q=2;
	int i,j,i2,j2;
	int bestValue = 0;
	int mainTab[3][3] = {{1, 2, 3},	{4, 5, 6}, {7, 8, 9}};
		
	int bestTab[P][Q];
	
	for (i=0;i<M-(P-1);i++) {	
		for (j=0;j<N-(Q-1);j++) {	
			int secondTab[P][Q];
			int value = 0;
			
			for (i2=0;i2<P;i2++) {
				for (j2=0;j2<Q;j2++) {
					secondTab[i2][j2] = mainTab[i+i2][j+j2];
				}
			}
			
			for (i2=0;i2<P;i2++) {
				for (j2=0;j2<Q;j2++) {
					value += secondTab[i2][j2];
				}
			}
		
			if (value>bestValue) {
				bestValue = value;
				for (i2=0;i2<P;i2++) {
					for (j2=0;j2<Q;j2++) {
						bestTab[i2][j2] = secondTab[i2][j2];
					}
				}
			}
		}
	}
	
	printf("\nNajlepsza podtablica to:\n");
	for (i2=0;i2<P;i2++) {
		for (j2=0;j2<Q;j2++) {
			printf("%d\t", bestTab[i2][j2]);
		}
		printf("\n");
	}
	printf("Suma jej elementow to %d.", bestValue);
	
	
	return 0;
}

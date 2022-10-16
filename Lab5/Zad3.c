#include<stdio.h>


int main() {
	
	int y1, x1, y2, x2;
	
	printf("Ilosc wierszy 1. macierzy: ");
	scanf("%d", &y1);
	
	printf("Ilosc kolumn 1. macierzy: ");
	scanf("%d", &x1);
	
	printf("Ilosc wierszy 2. macierzy: ");
	scanf("%d", &y2);
	
	printf("Ilosc kolumn 2. macierzy: ");
	scanf("%d", &x2);
	printf("\n\n\n");
	
	
	if (x1 == y2) {
		
		int M1[y1][x1], M2[y2][x2], M3[y1][x2];
		
		int i, i2, j;
		for (i=0;i<y1;i++) {
			
			for (i2=0;i2<x1;i2++) {
				printf("Podaj pole o wspolrzednych [%d][%d] 1. macierzy: ", i, i2);
				scanf("%d", &M1[i][i2]);				
			}
			
		}
		
		for (i=0;i<y2;i++) {
			
			for (i2=0;i2<x2;i2++) {
				printf("Podaj pole o wspolrzednych [%d][%d] 2. macierzy: ", i, i2);
				scanf("%d", &M2[i][i2]);
			}
			
		}
		
		printf("\n\n\n");
		
		
		for (i=0;i<y1;i++) {
	
		    for (i2=0;i2<x2;i2++) {
		    	
		    	int u = 0;
		    	
			    for (j=0;j<x1;j++) {
			    
				    u = u + M1[i][j] * M2[j][i2];
				    M3[i][i2] = u;
				}
			}
		}
		
		
		for (i=0;i<=y1-1;i++) {
			
			for (i2=0;i2<=x2-1;i2++) {
				printf("%d\t", M3[i][i2]);
			}
			
			printf("\n");
		}
		
		
	} else {
		printf("Tych macierzy nie mozna przemnozyc!");
	}
		
	return 0;
}

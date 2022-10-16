#include<stdio.h>
#include<math.h>

struct punkt {
	int x, y, z;
};

void dist(int N, struct punkt *tab) {
	
	struct punkt wektory[N]; //Wektory maja takie same wspolrzedne jak punkty
	
	int i;
	for(i=0;i<N-1;i++) {
		wektory[i].x = tab[i+1].x - tab[i].x;
		wektory[i].y = tab[i+1].y - tab[i].y;
		wektory[i].z = tab[i+1].z - tab[i].z;
		
		float dst = pow(pow(wektory[i].x, 2) + pow(wektory[i].y, 2) + pow(wektory[i].z, 2), 0.5);
		printf("u%d = [%d, %d, %d]\t=>\t%f\n", i+1, wektory[i].x, wektory[i].y, wektory[i].z, dst);
	}	
}

int main() {
	
	int N;
	
	do {
		printf("Wprowadz ilosc punktow(2 w gore): ");
		scanf("%d", &N);
	} while (N <=1);
	
	struct punkt tab[N];
	
	int i;
	for (i=0;i<N;i++) {
		printf("Wprowadz wspolrzedne %d. punktu: ", i+1);
		scanf("%d%d%d", &tab[i].x, &tab[i].y, &tab[i].z);
	}
	
	dist(N, tab);
	
	return 0;
}

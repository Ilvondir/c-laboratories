#include<stdio.h>
#include<math.h>

int main() {
	
	float tab[10];
	
	int i;
	for (i=0;i<=9;i++) {
		printf("Podaj liczbe: ");
		scanf("%f", &tab[i]);
	}
	
	
	//Suma
	float sum = 0;
	for (i=0;i<=9;i++) {
		sum = sum + tab[i];
	}
	
	printf("\n\nSuma: %.0f\n", sum);
	
	
	//Minimum
	int min = tab[0];
	for (i=0;i<=9;i++) {
		if (min > tab[i]) {
			min = tab[i];
		}
	}
	
	printf("Minimum: %d\n", min);
	
	
	//Maksimum
	int max = tab[0];
	for (i=0;i<=9;i++) {
		if (max < tab[i]) {
			max = tab[i];
		}
	}
	
	printf("Maksimum: %d\n", max);
	
	
	//Srednia
	float mean = sum / 10;
	
	printf("Srednia: %.1f\n", mean);
	
	
	//Odchylenie standardowe
	float deviation;
	float u = 0;
	for (i=0;i<=9;i++) {
		u = u + pow(tab[i] - mean, 2);
	}
	
	deviation = sqrt(u/10);
	printf("Odchylenie standardowe: %.2f\n", deviation);
	
	
	//Mediana
	for (i = 0; i < 9; ++i)
    {
    	int j;
        for (j = 0; j < 9 - i; ++j )
        {
            if (tab[j] > tab[j+1])
            {
                int temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
	
	float med = (tab[4] + tab[5])/2;
	printf("Mediana: %.1f\n", med);
	
	
	return 0;
}

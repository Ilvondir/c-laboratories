#include<stdio.h>

float mean(int n) {
	
	float tab[n];
	
	int i;
	for (i=0;i<n;i++) {
		printf("Wprowadz %d. liczbe: ", i+1);
		scanf("%f", &tab[i]);
	}
	
	float sum = 0;
	for(i=0;i<n;i++) {
		sum += tab[i];
	}
	
	float m = sum/n;
	
	return m;
	
}

int main() {
	
	int n;
	
	printf("Wprowadz ilosc swoich liczb: ");
	scanf("%d", &n);
	
	if (n>0) {
		float result = mean(n);
		
		printf("Srednia tych liczb: %f", result);
		
	} else {
		printf("Wprowadzono bledna liczbe.");
	}
	
	
	return 0;
}

#include<stdio.h>

struct wektor {
	float x, y, z;
};

float skalarny(struct wektor w1, struct wektor w2) {
	
	float skalar = w1.x * w2.x + w1.y * w2.y + w1.z * w2.z;
	
	return skalar;
}

struct wektor wektorowy(struct wektor w1, struct wektor w2) {
	
	struct wektor iloczyn;
	
	iloczyn.x = (w1.y * w2.z) - (w1.z * w2.y);
	iloczyn.y = (-1) * ((w1.x * w2.z) - (w1.z * w2.x));
	iloczyn.z = (w1.x * w2.y) - (w1.y * w2.x);
	
	return iloczyn;
}

int main() {
	
	struct wektor w1, w2, w3;
	
	printf("Wprowadz x, y, z pierwszego wektora: ");
	scanf("%f%f%f", &w1.x, &w1.y, &w1.z);
	
	printf("Wprowadz x, y, z drugiego wektora: ");
	scanf("%f%f%f", &w2.x, &w2.y, &w2.z);
	
	float skalar = skalarny(w1, w2);
	struct wektor iloczyn = wektorowy(w1, w2);
	
	printf("\nIloczyn skalarny tych wektorow to: %f, zas wektor ich kombinacji macierzowej to [%f, %f, %f].", skalar, iloczyn.x, iloczyn.y, iloczyn.z);
	
	printf("\n\nWprowadz x, y, z trzeciego wektora: ");
	scanf("%f%f%f", &w3.x, &w3.y, &w3.z);
	
	float det = (w1.x * w2.y * w3.z) + (w2.x * w3.y * w1.z) + (w3.x * w1.y * w2.z) - (w1.z * w2.y * w3.x) - (w2.z * w3.y * w1.x) - (w3.z * w1.y * w2.x);
	
	if (det != 0) {
		printf("\nWektory nie sa wspolplaszczyznowe.");
	} else {
		printf("\nWektory sa wspolplaszczyznowe.");
	}
	
	return 0;
}

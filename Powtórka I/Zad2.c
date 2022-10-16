#include<stdio.h>
#include<math.h>

float triangle(float a, float b, float c) {
	
	if (a<=0 || b<=0 || c<=0) {
		
		return 0;
		
	} else if (a>=b+c || b>=a+c || c>=a+b) {
		
		return 0;
	
	} else {
		float p = (a+b+c)/2;
		float field = sqrt(p*(p-a)*(p-b)*(p-c));
		return field;
	}
} 

int main() {
	float a, b, c;
	
	printf("Wprowadz, po spacji, wymiary Twojego trojkata: ");
	scanf("%f%f%f", &a, &b, &c);
	
	float check = triangle(a, b, c);
	
	if (check == 0) {
		printf("Z tych bokow nie mozna zlozyc trojkata.");
	} else {
		printf("Pole tego trojkata wynosi: %f", check);
	}
}

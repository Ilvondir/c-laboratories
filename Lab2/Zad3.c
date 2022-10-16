#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main() {
	int radius;
	
	printf("Wprowadz promien kuli: ");
	scanf("%d", &radius);
	
	float area = 4 * pow(radius,2) * pi;
	
	printf("Pole tej kuli wynosi %.2f", area);
		
	return 0;
}

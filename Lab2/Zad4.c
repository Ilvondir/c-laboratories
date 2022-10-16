#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main() {
	int radius;
	
	printf("Wprowadz promien kuli: ");
	scanf("%d", &radius);
	
	float volume = 4 * (pow(radius,3) * pi) / 3;
	
	printf("Objetosc tej kuli wynosi %.2f", volume);
		
	return 0;
}

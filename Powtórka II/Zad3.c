#include<stdio.h>
#include<string.h>

int main() {
	
	char zdanie[256];
	
	printf("Podaj swoje zdanie:\n");
	gets(zdanie);
	
	int dlugosc = strlen(zdanie);
	char nowezdanie[2*dlugosc];

	int i, blank = 0;
	for (i=0;i<2*dlugosc-1;i+=2) {
		
		if (zdanie[(i+2*blank)/2] == ' ') {
			blank++;
		}
		
		nowezdanie[i] = zdanie[(i+2*blank)/2];
		nowezdanie[i+1] = ' ';		
	}
	
	strupr(nowezdanie);
	
	printf("%s", nowezdanie);

	return 0;
}

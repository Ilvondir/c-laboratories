#include<stdio.h>

int main() {
	
	short *wsk;
	int x = 20;
	
	wsk = &x;
	
	printf("Dwa rozne wyswietlenia: \t %d \t %d", *wsk, *(&x));
	
	return 0;
}

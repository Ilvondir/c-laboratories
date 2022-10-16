#include<stdio.h>
#include<string.h>

int main() {
	
	char znak[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int ilosc[52] = {0};
	
	int i, j, warunek = 0;
	
	char text[150];
	
	printf("Wpisz swoje zdanie:\n");
	gets(text);
	
	for (i=0;i<150;i++) {
		for (j=0;j<52;j++) {
			if (text[i]==znak[j]) {
				ilosc[j]++;
			}
			
			if (text[i]=='\0') {
				warunek = 1;
			}
		}
		
		if (warunek == 1) {
			break;
		}
		
	}
	
	for (i=0;i<52;i++) {
		if (ilosc[i]>0) {
			printf("%c\t%d\n", znak[i], ilosc[i]);
		}
	}
	
	getchar();
	
	return 0;
}

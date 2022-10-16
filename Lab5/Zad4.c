#include<stdio.h>

int main() {
	
	char text[150];
	
	char ascii1[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 't', 'u', 'v', 'w', 'x', 'y', 'z', ',', '.', ' '};
	int ascii2[27] = {0};
	
	printf("Podaj swoje zdanie(bez polskich liter, tylko malymi literami):\n");
	gets(text);

	int i = 0;
	int i2;
	
	while (text[i] != 0) {
			
		for (i2=0;i2<27;i2++) {
			
			if (ascii1[i2]==text[i]) {
				ascii2[i2] = ascii2[i2]+1;
			}
		}
		
		i++;
		
	}
	
	for (i=0;i<27;i++) {
		
		if (ascii2[i] > 0) {
			printf("%c\t%d\n", ascii1[i], ascii2[i]);
		}
	
	}
	
	return 0;
}

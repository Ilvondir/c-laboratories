#include<stdio.h>
#include<string.h>

int main() {
	
	char text[150], temp[32];
	
	printf("Podaj swoje zdanie:\n");
	gets(text);
	int space1 = 0;
	int space2 = -1;
	
	int i, j, i2 = 0;
	for (i=0;i<strlen(text)+1;i++) {
		
		if (text[i] == ' ' || text[i]=='\0') {
			space2 = i;
		}
		
		if (space2 > -1) {
			for (j=space1;j<space2;j++) {
				temp[j-space1]=text[j];
			}
			printf("%s\n", temp);
			
			for(i2=0;i2<32;i2++) {
				temp[i2] = '\0';
			}
			
			space1 = space2+1;
			space2 = -1;
		}
	}
	
	getchar();
	return 0;
}

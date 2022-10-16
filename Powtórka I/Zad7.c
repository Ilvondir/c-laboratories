#include <stdio.h>

int main()
{

    char zdanie[100];
    int S = 0;
    int znaki[29] = {0}; // 26 == ",", 27 == ".", 28 == " "

    int litera;

    printf("Wprowadz zdanie: ");

    gets(zdanie);

    while (zdanie[S] != '\0'){

        if(zdanie[S] == ',') {

            znaki[26]++;

        } else if(zdanie[S] == '.') {

            znaki[27]++;

        } else if(zdanie[S] == ' ') {

            znaki[28]++;

        } else if(zdanie[S] >= 'a' && zdanie[S] <= 'z') {

            litera = zdanie[S] - 'a';
            znaki[litera]++;

        }

        S++;
    }

    int j;

    for(j=0; j<26; j++) {

        printf("%c pojawia sie %d razy\n", j + 'a', znaki[j]);

    }

    printf("%c pojawia sie %d razy\n", ',', znaki[26]);
    printf("%c pojawia sie %d razy\n", '.', znaki[27]);
    printf("%c pojawia sie %d razy\n", ' ', znaki[28]);

    return 0;

}







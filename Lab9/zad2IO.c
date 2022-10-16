#include<stdio.h>

int main()
{
    FILE *out;
    if ((out = fopen("aaa.txt", "wt"))== NULL)
    {
        printf("Nie mozna otworzyc outu!\n");
        return 1;
    }  
    
    printf("Program KALKULATOR\n");
    fprintf(out, "Program KALKULATOR\n");
    char opcja[100];
    while(1)
    {
        printf("Dostepne operacje:\n");
        printf("\t- dodawanie (+)\n");
        printf("\t- odejmowanie (-)\n");
        printf("\t- mnozenie (*)\n");
        printf("\t- dzielenie (/)\n");
        printf("Wprowadz znak wybranej operacji:\n");
        scanf("%s", &opcja);
       
        fprintf(out, "Dostepne operacje:\n");
        fprintf(out, "\t- dodawanie (+)\n");
        fprintf(out, "\t- odejmowanie (-)\n");
        fprintf(out, "\t- mnozenie (*)\n");
        fprintf(out, "\t- dzielenie (/)\n");
        fprintf(out, "Wprowadz znak wybranej operacji:\n");
        fprintf(out, "%s\n", opcja);
/**/
        float a,b;
		switch(opcja[0])
		{
			case '+':
				printf("Wybrano dodawanie (a+b)\n");
				printf("Podaj a:\n");
				scanf("%f", &a);
				printf("Podaj b:\n");
				scanf("%f", &b);
				printf("Wynik: %f + %f = %f\n", a, b, a+b);
				
				fprintf(out, "Wybrano dodawanie (a+b)\n");
				fprintf(out, "Podaj a:\n");
				fprintf(out, "%f", a);
				fprintf(out, "Podaj b:\n");
				fprintf(out, "%f", b);
				fprintf(out, "Wynik: %f + %f = %f\n", a, b, a+b);
				break;
			case '-':
				printf("Wybrano odejmowanie (a-b)\n");
				printf("Podaj a:\n");
				scanf("%f", &a);
				printf("Podaj b:\n");
				scanf("%f", &b);
				printf("Wynik: %f - %f = %f\n", a, b, a-b);
				
				fprintf(out, "Wybrano dodawanie (a-b)\n");
				fprintf(out, "Podaj a:\n");
				fprintf(out, "%f", a);
				fprintf(out, "Podaj b:\n");
				fprintf(out, "%f", b);
				fprintf(out, "Wynik: %f - %f = %f\n", a, b, a-b);
				break;
			case '*':
				printf("Wybrano mnozenie (a*b)\n");
				printf("Podaj a:\n");
				scanf("%f", &a);
				printf("Podaj b:\n");
				scanf("%f", &b);
				printf("Wynik: %f * %f = %f\n", a, b, a*b);
				
				fprintf(out, "Wybrano dodawanie (a*b)\n");
				fprintf(out, "Podaj a:\n");
				fprintf(out, "%f", a);
				fprintf(out, "Podaj b:\n");
				fprintf(out, "%f", b);
				fprintf(out, "Wynik: %f * %f = %f\n", a, b, a*b);
				break;
			case '/':
				printf("Wybrano dzielenie (a/b)\n");
				printf("Podaj a:\n");
				scanf("%f", &a);
				printf("Podaj b:\n");
				scanf("%f", &b);
				
				fprintf(out, "Wybrano dzielenie (a/b)\n");
				fprintf(out, "Podaj a:\n");
				fprintf(out, "%f", a);
				fprintf(out, "Podaj b:\n");
				fprintf(out, "%f", b);
				
				while(b==0)
				{
					printf("Nie mozna dzielic przez 0! Podaj prawidlowe b:\n");
					scanf("%f", &b);
					
					fprintf(out, "Nie mozna dzielic przez 0! Podaj prawidlowe b:\n");
					fprintf(out, "%f", b);
				}
				printf("Wynik: %f / %f = %f\n", a, b, a/b);
				fprintf(out, "Wynik: %f / %f = %f\n", a, b, a/b);
				
				break;
			default:
				printf("Wybrano nieprawidlowa opcje!\n");
				fprintf(out, "Wybrano nieprawidlowa opcje!\n");
				break;
		}
		printf("\nKonczymy (t/n)?:\n");
		scanf(" %c", &opcja);
		
		fprintf(out, "\nKonczymy (t/n)?:\n");
		fprintf(out, "%s", opcja);
		
		if(opcja[0]=='t' || opcja[0]=='T')
			break;
	}
	printf("\nDo zobaczenia!\n");
	fprintf(out, "\nDo zobaczenia!\n");
	fclose(out);
	return 0;
}



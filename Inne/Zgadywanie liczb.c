#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int result = rand() % 100;
    printf("Podaj swoj typ liczby od 0 do 100:\n");
    
    int shoot;
    int attempt = 0;
    
    do {
        attempt++;
        scanf("%d", &shoot);
        
        if (shoot > result) {
            printf("Twoja liczba jest za duza.\n");
        } else  if (shoot < result) {
            printf("Twoja liczba jest za mala.\n");
        }
    } while (shoot != result);
    
    if (shoot == result) {
        if (attempt == 1) {
            printf("Los szczescia! Zgadles za %d razem!", attempt);
        } else if (attempt > 1 && attempt < 7) {
            printf("Calkiem niezle! Zgadles za %d razem.", attempt);
        } else {
            printf("Nieco gorzej. Zgadles za %d razem.", attempt);
        }
    }
    
    return 0;
}

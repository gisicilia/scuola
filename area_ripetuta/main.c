#include <stdio.h>
#include <stdlib.h>

float area(float base, float altezza) {
    return base * altezza;
}

int main() {
    float base, altezza;
    int n, i;
    float risultato;
    
    printf("Programma per il calcolo dell'area di un rettangolo\n");
    
    printf("Inserisci la base del rettangolo: ");
    scanf("%f", &base);
    
    printf("Inserisci l'altezza del rettangolo: ");
    scanf("%f", &altezza);
    
    printf("Inserisci il numero di ripetizioni: ");
    scanf("%d", &n);
    
    risultato = area(base, altezza);
    
    printf("\nRisultato:\n");
    for (i = 1; i <= n; i++) {
        printf("L'area del rettangolo con base %.2f e altezza %.2f è %.2f\n", 
               base, altezza, risultato);
    }
    
    return 0;
}

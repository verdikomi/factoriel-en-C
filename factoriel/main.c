#include <stdio.h>
#include <stdlib.h>
int main() {
    int fact=1, nombre;
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &nombre);
    while (nombre < 0) {
        printf("Erreur! Veuillez entrer un nombre entier positif: ");
        scanf("%d", &nombre);
    }
    for(int i=1; i<=nombre; i++) {
        fact = fact* i;
    }
    printf("La factorielle de %d est %d\n", nombre, fact);
    return 0;
}

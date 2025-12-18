#include <stdio.h>
#include <stdlib.h>
int main() {
    int fact=1, nombre, eng=0;
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &nombre);
    eng = nombre;
    while (nombre < 0) {
        printf("Erreur! Veuillez entrer un nombre entier positif: ");
        scanf("%d", &nombre);
    }
    while (nombre > 1) {
        fact = fact * nombre;
        nombre--;
    }
    printf("La factoriel de %d est %d\n", eng, fact);
    return 0;
}

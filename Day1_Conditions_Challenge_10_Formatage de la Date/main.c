#include <stdio.h>

int main() {
    int jour, mois, annee;
   printf("Entrez une date au format jj/mm/aaaa : ");
   scanf("%d %d %d", &jour, &mois, &annee);
    char *moisNom[] = {"Janvier", "F�vrier", "Mars", "Avril", "Mai", "Juin","Juillet", "Ao�t", "Septembre", "Octobre", "Novembre", "D�cembre"};
   if (mois >= 1 && mois <= 12) {
        printf("%d-%s-%d\n", jour, moisNom[mois - 1], annee);
    } else {
        printf("Mois invalide !\n");
    }
    return 0;
}

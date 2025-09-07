#include <stdio.h>

int main() {
    int jAccordes, jUtilises, statut;
    int jRestants;
    printf("Entrez le nombre total de jours de conges accordes : ");
    scanf("%d", &jAccordes);
    printf("Entrez le nombre de jours de conges utilises : ");
    scanf("%d", &jUtilises);
    printf("Entrez le statut de l'employe (0 = temps partiel, 1 = temps plein) : ");
    scanf("%d", &statut);
    if (statut == 1) {
        jRestants = jAccordes - jUtilises;
    } else if (statut == 0) {
        jRestants = (jAccordes / 2) - jUtilises;
    } else {
        printf("Statut invalide !\n");
        return 1;
    }
    if (jRestants < 0) {
        printf("Alerte : Les jours utilises depassent le quota autorise \n");
    } else {
        printf("Jours de conges restants : %d\n", jRestants);
    }

    return 0;
}

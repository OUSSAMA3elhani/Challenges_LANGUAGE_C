#include <stdio.h>

int main() {
    float moy;
    printf("Entrez la moyenne de l'élève :");
    scanf("%f", &moy);
    if (moyenne < 10) {
        printf("Recalé\n");
    }
    else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention Passable\n");
    }
    else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention Assez Bien\n");
    }
    else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention Bien\n");
    }
    else if (moyenne >= 16) {
        printf("Mention Très Bien\n");
    }

    return 0;
}

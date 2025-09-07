#include <stdio.h>

int main() {
    int s, a, r;
    float scoreFinal;
    printf("Entrez le score de performance 0-100 : ");
    scanf("%d", &s);
    printf("Entrez l'anciennete en annees : ");
    scanf("%d", &a);
    printf("Entrez le nombre de recompenses (0 = aucune, 1 = une, 2 = deux ou plus) : ");
    scanf("%d", &r);
    scoreFinal = s;
    if (r == 1) {
        s *= 1.1;
    } else if (r >= 2) {
        scoreFinal *= 1.2;
    }
    if (scoreFinal > 100) {
        scoreFinal = 100;
    }
    if (scoreFinal >= 90 && a >= 5) {
        printf("Evaluation : Excellente (Score final : %.2f)\n", scoreFinal);
    } else if (scoreFinal >= 75 && a >= 3) {
        printf("Evaluation : Bonne (Score final : %.2f)\n", scoreFinal);
    } else if (scoreFinal >= 50 && a < 3) {
        printf("Evaluation : Satisfaisante (Score final : %.2f)\n", scoreFinal);
    } else if (scoreFinal < 50) {
        printf("Evaluation : Insuffisante (Score final : %.2f)\n", scoreFinal);
    } else {
        printf("Evaluation : Non definie (Score final : %.2f)\n", scoreFinal);
    }

    return 0;
}

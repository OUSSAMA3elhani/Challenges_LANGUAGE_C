#include <stdio.h>

int main() {
    int age, acotisation;
    float montant, bonus = 0, pension;
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez le nombre d'annees de cotisation : ");
    scanf("%d", &acotisation);
    printf("Entrez le montant total epargne en euros : ");
    scanf("%f", &montant);
    if(age < 65) {
        printf("Plan epargne non encore disponible.\n");
    } else {
        if(montant > 50000) {
            bonus = ((int)((montant - 50000)/10000)) * 0.05;
        }
        if(age >= 65 && acotisation >= 30 && montant >= 100000) {
            pension = montant * (1 + bonus);
            printf("Plan complet avec pension elevee : %f euros\n", pension);
        } else if(age >= 65 && acotisation >= 20 && montant >= 50000) {
            pension = montant * (1 + bonus);
            printf("Plan partiel avec pension moyenne : %f euros\n", pension);
        } else {
            printf("Plan non eligible selon les criteres.\n");
        }
    }
    return 0;


}

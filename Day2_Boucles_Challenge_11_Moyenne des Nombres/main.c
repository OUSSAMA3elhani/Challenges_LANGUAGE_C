#include <stdio.h>

int main(){
    int n, somme=0, compteur=0;
    printf("Entrez des nombres positifs (0 pour terminer) :\n");
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        somme += n;
        compteur++;
    }
    if(compteur == 0) printf("Aucun nombre entré.\n");
    else printf("La moyenne est : %.2f\n", (float)somme/compteur);

    return 0;
}

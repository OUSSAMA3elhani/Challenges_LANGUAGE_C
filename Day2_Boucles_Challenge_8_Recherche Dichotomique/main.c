#include <stdio.h>

int main() {
    int n, x;
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements tri�s du tableau : ");
    for(int i=0;i<n;i++)
    scanf("%d", &tab[i]);

    printf("Entrez le nombre � rechercher : ");
    scanf("%d", &x);

    int debut=0, fin=n-1, trouve=0;
    while(debut <= fin){
        int milieu = (debut + fin)/2;
        if(tab[milieu] == x){
            trouve = 1;
            printf("Element trouv� � l'indice %d\n", milieu);
            break;
        }
        else if(tab[milieu] < x) debut = milieu + 1;
        else fin = milieu - 1;
    }

    if(!trouve) printf("Element non trouv�\n");

    return 0;
}

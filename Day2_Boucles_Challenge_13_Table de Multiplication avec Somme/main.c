#include <stdio.h>

int main(){
    int n, somme=0;
    printf("Entrez un nombre : ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        int produit = n * i;
        printf("%d * %d = %d\n", n, i, produit);
        somme += produit;
    }

    printf("La somme des produits est : %d\n", somme);
    return 0;
}

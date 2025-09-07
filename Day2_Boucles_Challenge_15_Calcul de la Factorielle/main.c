#include <stdio.h>

int main(){
    int n;
    long resultat = 1;
    printf("Entrez un entier : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        resultat *= i;
    }

    printf("%d! = %ld\n", n, resultat);
    return 0;
}

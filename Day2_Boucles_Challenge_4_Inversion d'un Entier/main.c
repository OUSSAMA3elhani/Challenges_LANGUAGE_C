#include <stdio.h>

int main(){
    int n;
    printf("Entrez un entier : ");
    scanf("%d",&n);

    printf("L'entier invers� est : ");
    while(n != 0){
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");
    return 0;
}

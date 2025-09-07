#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,s=0;
    printf("donner le nombre d'elements d'un tableau : ");
    scanf("%d",&N);
    int T[N],t[N];
    for(int i=0;i<N;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
        t[i]=T[i];
    }
    printf("tableau original :\n");
    for(int i=0;i<N;i++){
        printf("%d \t",T[i]);
    }
    printf("\n tableau copié  :\n");
    for(int i=0;i<N;i++){
        printf("%d \t",t[i]);
    }
}

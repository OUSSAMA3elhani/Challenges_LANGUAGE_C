#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,s=0;
    printf("donner le nombre d'éléments un tableau : ");
    scanf("%d",&N);
    int T[N];
    for(int i=0;i<N;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    for(int i=0;i<N;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }

    return 0;
}

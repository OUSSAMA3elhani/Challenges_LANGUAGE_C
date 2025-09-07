#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,max;
    printf("donner le nombre d'elements d'un tableau : ");
    scanf("%d",&N);
    int T[N];
    for(int i=0;i<N;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    max=T[0];
    for(int i=1;i<N;i++){
        if(max<T[i]){
            max=T[i];
        }
    }
    printf("le max = %d",max);
}

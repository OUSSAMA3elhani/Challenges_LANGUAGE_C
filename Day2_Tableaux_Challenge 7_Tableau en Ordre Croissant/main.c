#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,r;
    printf("donner le nombre d'elements d'un tableau : ");
    scanf("%d",&N);
    int T[N];
    for(int i=0;i<N;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    for(int j=0;j<N;j++){
    for(int i=0;i<N;i++){
    if (T[j]<T[i]){
        r=T[j];
        T[j]=T[i];
        T[i]=r;
    }
    }
    }
    for(int i=0;i<N;i++){
        printf("T[%d]= %d\n",i+1,T[i]);

    }
}

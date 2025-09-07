#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N,r,n;
    printf("donner le nombre d'elements d'un tableau : ");
    scanf("%d",&N);
    int T[N];
    for(int i=0;i<N;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    printf("donner la valeur à remplacer : ");
    scanf("%d",&r);
    printf("donner la nouvelle valeur: ");
    scanf("%d",&n);
    for(int i=0;i<N;i++){
    if (T[i]==r){
        T[i]=n;
    }
    }
    for(int i=0;i<N;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }

    return 0;
}

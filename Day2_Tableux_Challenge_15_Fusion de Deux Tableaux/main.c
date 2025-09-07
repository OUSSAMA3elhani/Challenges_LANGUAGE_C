#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2;
    printf("donner la taille de la tableau 1 :");
    scanf("%d",&N1);
    int T1[N1];
    printf("remplaser le tableau 1 :\n");
    for(int i =0;i<N1;i++){
        printf("donner T1[%d]=",i+1);
        scanf("%d",&T1[i]);
    }
    printf("donner la taille de la tableau 1 :");
    scanf("%d",&N2);
    int T2[N2];
    printf("remplaser le tableau 2 :\n");
    for(int i =0;i<N2;i++){
        printf("donner T2[%d]=",i+1);
        scanf("%d",&T2[i]);
    }
    int T[N1+N2];
    for(int i=0;i<(N1+N2);i++){
        if(i<N1){
            T[i]=T1[i];
        }
        if(i>=N1){

            T[i]=T2[i-N1];
        }

    }
    for(int i=0;i<N1+N2;i++){
        printf("%d  \n",T[i]);


    }
    return 0;
}

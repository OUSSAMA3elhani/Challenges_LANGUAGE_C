#include <stdio.h>
#include <stdlib.h>

int main()
{   int N,S,a=0;
    printf("donner la taille de la tableau :");
    scanf("%d",&N);
    int T[N];
    for(int i =0;i<N;i++){
        printf("donner T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    printf("donner element specifique=");
    scanf("%d",&S);
    for(int i=0;i<N;i++){

        if(S==T[i]){
            a=1;
        }

    }
    if(a==0){
        printf("élément est n'exist pas ");
    }else{
        printf("élément est exist ");
    }
    return 0;

}

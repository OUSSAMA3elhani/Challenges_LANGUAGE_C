#include <stdio.h>

int main(){
    int lignes;
    printf("Le nombre des lignes:");
    scanf("%d",&lignes);
    int count=0;
    int etoiles=2;

    while(count<lignes){
        int premier=1;
        for(int i=2;i*i<=etoiles;i++){
            if(etoiles%i==0){
                premier=0;
                break;
            }
        }
        if(premier){
            for(int i=0;i<lignes-count-1;i++) printf(" ");
            for(int i=0;i<etoiles;i++) printf("*");
            printf("\n");
            count++;
        }
        etoiles++;
    }
    return 0;
}

#include <stdio.h>

int main(){
    int n;
    printf("Entrez un entier n : ");
    scanf("%d",&n);

    printf("Les nombres premiers de 1 à %d sont : ", n);
    for(int i=2;i<=n;i++){
        int premier=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                premier=0;
                break;
            }
        }
        if(premier) printf("%d ",i);
    }
    printf("\n");
    return 0;
}

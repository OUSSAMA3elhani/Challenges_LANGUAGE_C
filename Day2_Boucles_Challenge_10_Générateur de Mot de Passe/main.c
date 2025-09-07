#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Entrez la longueur du mot de passe : ");
    scanf("%d", &n);
    char maj[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char min[] = "abcdefghijklmnopqrstuvwxyz";
    char chiffres[] = "0123456789";
    char all[63];
    int idx=0;
    for(int i=0;i<26;i++) all[idx++] = maj[i];
    for(int i=0;i<26;i++) all[idx++] = min[i];
    for(int i=0;i<10;i++) all[idx++] = chiffres[i];
    all[idx] = '\0';
    srand(time(0));
    for(int i=0;i<n;i++){
        int r = rand() % idx;
        printf("%c", all[r]);
    }
    printf("\n");
    return 0;
}

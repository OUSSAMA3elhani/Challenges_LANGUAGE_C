#include <stdio.h>
#include <stdlib.h>

struct etudiant {
    char nom[100];
    char prenom[100];
    int notes[100];
};
int main()
{
    typedef struct etudiant etudiant;
    int N ,n;
    printf("tu as commbien des étudiants :");
    scanf("%d",&N);
    printf("tu as commbien des notes pour chaque etudiant :");
    scanf("%d",&n);
    etudiant E[N];

    for(int i=0;i<N;i++){
        printf("#Etudiant %d : \n",i+1);
        printf("donnez le nom : ");
        gets(E[i].nom);

        printf("\n");
        printf("donnez le prenom : ");
        gets(E[i].prenom);
        for(int j=0;j<n;j++){
        printf("donner le %d eme note d'etudiant %d : ",j+1,i+1);
        scanf("%d",&E[i].notes[j]);
        }
    }
    for(int i=0;i<N;i++){
        printf("#Etudiant %d : \n",i);
        printf("le nom: %s \n",E[i].nom);
        printf("le prenom : %s \n",E[i].prenom);
        printf("les notes :");
        for(int j=0;j<n;j++){
        printf("%d  ",E[i].notes[j]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

    struct personne {
    char nom[100] ;
    char prenom[100];
    int age ;
    };

int main()
{
    typedef struct personne personne;
    personne p1={"Hassan","Hossayni",15};

    printf("Donner le num :");
    gets(p1.nom);

    printf("Donner le prenom :");
    gets(p1.prenom);
    printf("Donner l'age : ");
    scanf("%d",&p1.age);

    printf("%s\n",p1.nom);
    printf("%s\n",p1.prenom);
    printf("%d\n",p1.age);

    return 0;
}

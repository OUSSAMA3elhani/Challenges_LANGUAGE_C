#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nbContacts=0,i ,N;
char nom[100];

struct Contact {

    char nom[100];
    char telephone[20];
    char email[100];
};

void ajouterContact(struct Contact *P) {
    if (nbContacts >=N) {
        printf("Carnet plein, impossible d'ajouter un nouveau contact.\n");
        return;
    }

    printf("Entrer le nom : ");
    scanf(" %[^\n]", P[nbContacts].nom);

    printf("Entrer le numero de telephone : ");
    scanf(" %[^\n]", P[nbContacts].telephone);

    printf("Entrer l'adresse e-mail : ");
    scanf(" %[^\n]", P[nbContacts].email);

    nbContacts=nbContacts+1;
    printf("Contact ajoute avec succes \n");
}
void afficherContacts(struct Contact *P) {
    if (nbContacts == 0) {
        printf("Aucun contact a afficher.\n");
        return;
    }
    printf("Liste des Contacts \n");
    for (int i = 0; i < nbContacts; i++) {
        printf("%d) Nom: %s | Tel: %s | Email: %s\n",
               i + 1, P[i].nom, P[i].telephone, P[i].email);
    }
}

int rechercherindice(struct Contact *P,char *nom) {
    for (int i = 0; i < nbContacts; i++) {
        if (strcmp(P[i].nom, nom) == 0) {
            return i;
        }
    }
    return -1;
}



int main(){

    printf("donner la taille maximale de liste de contact :");
    scanf("%d",&N);
    struct Contact c[N];
    int choix;

    do {

        printf(" Système de Gestion de Contacts \n");
        printf("1 : Ajouter un contact\n");
        printf("2 : Afficher tous les contacts\n");
        printf("3 : Rechercher un contact\n");
        printf("4 : Modifier un contact\n");
        printf("5 : Supprimer un contact\n");
        printf("0 : Quitter\n");
        printf(" Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterContact(c);
                break;
           case 2:
                afficherContacts(c);
                break;
           case 3: {
                printf("Entrer le nom a rechercher : ");
                scanf(" %[^\n]", nom);
                int i = rechercherindice(c,nom);
                if (i != -1) {
                    printf("Contact trouve : Nom: %s | Tel: %s | Email: %s\n",
                           c[i].nom, c[i].telephone, c[i].email);
                } else {
                    printf("Contact non trouve.\n");
                }
                break;
            }
             case 4:
                printf("Entrer le nom a modifier : ");
                scanf(" %[^\n]", nom);
                i = rechercherindice(c,nom);

                if (i == -1) {
                        printf("Contact non trouve.\n");
                return;
                }
                printf("Nouveau numero de telephone : ");
                scanf(" %[^\n]", c[i].telephone);

                printf("Nouvelle adresse e-mail : ");
                scanf(" %[^\n]", c[i].email);

                printf("Contact modifie avec succes !\n");
                  break;
            case 5:
                printf("Entrer le nom du contact a supprimer : ");
                scanf(" %s", nom);

                i = rechercherindice(c,nom);
                if (i== -1) {
                printf("Contact non trouve.\n");
                return ;
            }
                for (int j = i; i < nbContacts - 1; j++) {
                c[j] = c[j + 1];
            }
            nbContacts--;

            printf("Contact supprime avec succes !\n");
            break;
            case 0: printf("By By !\n"); break;
            default: printf("ERREUR :choix invalide.\n");
        }
    }while (choix != 0);
    return 0;
}

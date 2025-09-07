#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractère : ");
    scanf("%c", &c);
    if ((c >= 'A'&&c <= 'Z') || (c >= 'a'&&c <= 'z')) {
        printf("'%c' est un alphabet \n", c);
        if (c >= 'A' && c <= 'Z') {
            printf("C'est une majuscule \n");
        } else {
            printf("C'est une minuscule \n");
        }
    } else {
        printf(" n'est pas un alphabet ");
    }

    return 0;
}

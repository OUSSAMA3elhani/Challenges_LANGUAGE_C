#include <stdio.h>

int main() {
    char ch[100];
    char r[100];

    printf("Entrez une chaine de caracteres : ");
    gets(ch);
    j = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] != ' ') {
            r[j] = ch[i];
            j++;
        }
    }
    r[j] = '\0';

    for (int i = 0; r[i] != '\0'; i++) {
    }
    printf("Chaine sans espaces : %s", r);

    return 0;
}

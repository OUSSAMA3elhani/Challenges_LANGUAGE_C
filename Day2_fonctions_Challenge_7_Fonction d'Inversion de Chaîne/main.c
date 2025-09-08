#include <stdio.h>
#include <string.h>

void inverser(char str[]) {
    int i, j;
    char temp;
    int n = strlen(str);
    for(i = 0, j = n - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char chaine[100];
    printf("Entrez une cha�ne : ");
    scanf("%s", chaine);
    inverser(chaine);
    printf("Cha�ne invers�e : %s\n", chaine);
    return 0;
}

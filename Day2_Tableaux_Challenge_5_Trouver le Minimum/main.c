#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);
    int t[n];
    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    int min = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i] < min) {
            min = t[i];
        }
    }
    printf("Le plus petit element du tableau est : %d\n", min);
    return 0;
}

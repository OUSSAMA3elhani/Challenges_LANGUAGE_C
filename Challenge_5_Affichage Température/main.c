#include <stdio.h>

int main() {
    float C;
    printf("Donner la température en Celsius :");
    scanf("%f", &C);
    if (C < 0) {
        printf("À %0.2f °C, l'eau est à l'état solide.\n", C);
    }
    else if (C >= 0 && C < 100) {
        printf("À %0.2f °C, l'eau est à l'état liquide.\n", C);
    }
    else {
        printf("À %0.2f °C, l'eau est à l'état gazeux.\n", C);
    }

    return 0;
}

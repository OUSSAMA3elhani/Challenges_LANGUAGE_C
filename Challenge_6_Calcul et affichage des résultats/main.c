#include <stdio.h>

int main() {
    float a, b;
    printf("Donner le premier nombre a= ");
    scanf("%f", &a);
    printf("Donner le deuxi�me nombre b= ");
    scanf("%f", &b);
    printf("R�sultats :\n");
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    if (b != 0) {
        printf("a / b =%.2f\n", a / b);
    } else {
        printf("a / b =Impossible ""division par z�ro""\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char*jours[]={"Lundi", "Mardi", "Mercredi", "Jeudi","Vendredi", "Samedi", "Dimanche"};
    srand(time(NULL));
    printf("le jour est :%s\n",jours[rand()%7]);
    return 0;
}

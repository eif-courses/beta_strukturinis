#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Namas{
    int nr;
    char gatve[44];
    char *miestas;
};

int main(int argc, char const *argv[])
{

    struct Namas darbas;
    darbas.miestas = malloc(50);
    strcpy(darbas.miestas, "Vilnius");
    darbas.nr = 15;
    strcpy(darbas.gatve, "Jasinskio g.");
    printf("output: %s %d, %s", darbas.gatve, darbas.nr, darbas.miestas);
    free(darbas.miestas);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    char expressao[50] = "50 150 +";
    printf("\nInsira a expressão:\n");
    scanf("%49[ˆ\n]", &expressao[0]);
    printf("%s\n", expressao);
    printf("Resultado de %s :\t", expressao);
    printf("%f\n", resolver(expressao));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

float operacao(float a, float b, char x){
    switch (x) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return 0;
    }
}

int main() {

    return 0;
}

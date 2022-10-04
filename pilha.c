//
// Created by César de Souza on 03/10/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

No* empilhar(No *pilha, float x){
    No *novo = malloc(sizeof (No));
    if(novo){
        novo->x=x;
        novo->proximo=pilha;
        return novo;
    } else{
        printf("\nERRO NA ALOCACAO\n");
    }return NULL;
}
No* desempilhar(No **pilha){
    No *remover = NULL;
    if(*pilha){
        remover = *pilha;
        *pilha=remover->proximo;
    } else{
        printf("Pilha vazia");
    }return remover;
}

float operation(float a, float b, char x){
    switch (x) {
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default:
            return 0;
    }
}

float resolver(char x[]){ // "51 13 12 * +"
    char *p;
    float num = 0;
    No *no1, *no2, *pilha = NULL;
    p = strtok(x, " ");
    while (p){
        if(p[0]=='+'||p[0]=='-'||p[0]=='*'||p[0]=='/'){
            no1 = desempilhar(&pilha);
            no2 = desempilhar(&pilha);
            num = operation(no1->x, no2->x, p[0]);
            pilha = empilhar(pilha, num);
            free(no1);
            free(no2);
        }else{
            num = strtol(p, NULL, 10);
            pilha = empilhar(pilha, num);
        }
        p=strtok(NULL, " ");
    }
    num = desempilhar(&pilha)->x;
    return num;
}
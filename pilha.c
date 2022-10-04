//
// Created by César de Souza on 01/10/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <string.h>

No* empilhar(No *pilha, float x){
    No *novo = malloc(sizeof (No));
    if(novo){
        novo->x=x;
        novo->proximo=pilha;
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
float resolver(char x[]){
    char *p;

    p =

}
void inverter(char x[]){
    int i = 0;
    No *remover, *pilha = NULL;
    while (x[i]!='\0'){
        if(x[i]!=' '){
            pilha = empilhar(pilha, x[i]);
        } else{
            while (pilha){
                remover = desempilhar(&pilha);
                printf("%c", remover->x);
                free(remover);
            }
            printf(' ');
        }
        i++;
    }
    while (pilha){
        remover = desempilhar(&pilha);
        printf("%c", remover->x);
        free(remover);
    }
    printf("\n");
}
int identificaFormacao(char x[]){
    int i= 0;
    No *remover, *pilha= NULL;

    while (x[i]!='\0'){
        if(x[i]!=' '){
            pilha= empilhar(pilha, x[i]);
        } else{
            while (pilha){
                remover = desempilhar(&pilha);
                printf("%c", remover->x);
                free(remover);
            }
            printf(" ");
        }
        i++;
    }
    while (pilha){
        remover = desempilhar(&pilha);
        printf("%c", remover->x);
        free(remover);
    }
    printf("\n");
}

//
// Created by César de Souza on 03/10/22.
//

#ifndef UNTITLED_PILHA_H
#define UNTITLED_PILHA_H


typedef struct no{
    float x;
    struct no *proximo;
} No;

No* empilhar(No *pilha, float x);
No* desempilhar(No **pilha);
float operation(float a, float b, char x);
float resolver(char x[]);


#endif //UNTITLED_PILHA_H

//
// Created by César de Souza on 01/10/22.
//

#ifndef UNTITLED_PILHA_H
#define UNTITLED_PILHA_H


typedef struct no{
    float x;
    struct no *proximo;
} No;


No* empilhar(No *pilha, float x);
No* desempilhar(No **pilha);
float resolver(char x[]);
void inverter(char x[]);
int identificaFormacao();


#endif //UNTITLED_PILHA_H

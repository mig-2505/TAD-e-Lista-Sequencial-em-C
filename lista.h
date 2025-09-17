// lista.h

#ifndef LISTA_H
#define LISTA_H

#include "aluno.h"

#define QTD_MAX 100

typedef struct {
   Aluno dados[QTD_MAX];
   int qtd;
} Lista;

void inicializarLista(Lista *l);
int inserirAluno(Lista *l, Aluno a);
void imprimirLista(Lista l);
void removerUltimo(Lista *l);
int buscarAlunoPorRM(const Lista *l, int rm);
#endif
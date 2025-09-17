// lista.c

#include <stdio.h>
#include "lista.h"

void inicializarLista(Lista *l) {
   l->qtd = 0;
}

int inserirAluno(Lista *l, Aluno a) {
   if (l->qtd < QTD_MAX) {
       l->dados[l->qtd] = a;
       l->qtd++;
       return 1; // sucesso
   } else {
       return 0; // falha (lista cheia)
   }
}

void imprimirLista(Lista l) {
   for (int i = 0; i < l.qtd; i++) {
       imprimirAluno(l.dados[i]);
   }
}

void removerUltimo(Lista *l) {
   if (l->qtd > 0) {
       l->qtd--; // só reduz o contador, "apagando" o último
   } else {
       printf("Lista vazia, nada a remover.\n");
   }
}

void buscarAlunoPorRM(Lista l, int rm) {
    for (int i = 0; i < l.qtd; i++) {
        if (l.dados[i].rm == rm) {
            return i; // retorna posição do aluno
        }
    }
    return -1; // não encontrado
}
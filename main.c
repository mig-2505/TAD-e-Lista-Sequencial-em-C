// main.c
#include <stdio.h>
#include "aluno.h"
#include "lista.h"

int main() {
    Aluno a1 = criarAluno("Maria", 559087, 8.5);
    Aluno a2 = criarAluno("João", 558761, 7.0);

    imprimirAluno(a1);
    imprimirAluno(a2);

    printf("\nAlterando nota da Maria para 9.5... \n");
    alterarNota(&a1, 9.5);
    imprimirAluno(a1);

    // ---- Parte do exercício 2 (remover último da lista) ----
    Lista l;
    inicializarLista(&l);

    inserirAluno(&l, a1);
    inserirAluno(&l, a2);
    inserirAluno(&l, criarAluno("Ana", 558999, 9.0));

    printf("\nLista inicial:\n");
    imprimirLista(l);

    printf("\nRemovendo o último aluno...\n");
    removerUltimo(&l);

    printf("\nLista após remoção:\n");
    imprimirLista(l);
    
    return 0;
}
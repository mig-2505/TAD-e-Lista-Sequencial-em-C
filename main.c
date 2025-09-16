// main.c
#include <stdio.h>
#include "aluno.h"

int main() {
    Aluno a1 = criarAluno("Maria", 559087, 8.5);
    Aluno a2 = criarAluno("João", 558761, 7.0);

    imprimirAluno(a1);
    imprimirAluno(a2);

    printf("\nAlterando nota da Maria para 9.5... \n");
    alterarNota(&a1, 9.5);
    imprimirAluno(a1);
    
    return 0;
}
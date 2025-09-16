// aluno.h
#ifndef ALUNO_H
#define ALUNO_H
typedef struct {
    char nome[50];
    int rm;
    float nota;
} Aluno;
// Operações do TAD
void alterarNota(Aluno *a, float novaNota);
Aluno criarAluno(const char *nome, int rm, float nota);
void imprimirAluno(Aluno a);
#endif
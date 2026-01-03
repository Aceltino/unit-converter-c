#ifndef CONVERSAO_H
#define CONVERSAO_H

// Estrutura para armazenar uma conversão
typedef struct {
    float valorOrigem;
    float valorConvertido;
    char unidadeOrigem[10];
    char unidadeDestino[10];
} Conversao;

// Função para salvar conversão em arquivo
void salvarConversao(Conversao *c);

// Função para ler e exibir histórico
void lerHistorico();

#endif

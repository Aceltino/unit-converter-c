#include <stdio.h>
#include <string.h>
#include "headers/utils.h"
#include "headers/estilo.h"

int lerOpcao(int min, int max) {
    int op;
    char c;
    while (1) {
        if (scanf("%d", &op) != 1) {
            while ((c = getchar()) != '\n' && c != EOF);
            printf(RED "Opção inválida! Digite um número entre %d e %d.\n" RESET, min, max);
        } else if (op < min || op > max) {
            printf(RED "Opção inválida! Digite um número entre %d e %d.\n" RESET, min, max);
            while ((c = getchar()) != '\n' && c != EOF);
        } else {
            while ((c = getchar()) != '\n' && c != EOF);
            return op;
        }
        printf(CYAN "Digite novamente: " RESET);
    }
}

float lerFloat(float *valor) {
    char entrada[50];
    char *p;
    float temp;

    while (1) {

        // lê linha completa
        if (!fgets(entrada, sizeof(entrada), stdin)) {
            // se falhar, limpa buffer
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }

        // remove newline e troca vírgula por ponto
        for (p = entrada; *p != '\0'; p++) {
            if (*p == '\n') { *p = '\0'; break; }
            if (*p == '.') { *p = ','; }
        }

        // tenta converter
        if (sscanf(entrada, "%f", &temp) == 1) {
            *valor = temp;
            return 1;
        }

        printf(RED "Valor inválido! Digite um número como: 5 | 3.5 | 2,8\n" RESET);
        printf(CYAN "Digite novamente: " RESET);
    }
}

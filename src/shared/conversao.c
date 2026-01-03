#include "headers/conversao.h"

#include <time.h>
#include <stdio.h>
#include <string.h>
#include "headers/estilo.h"


// Salva uma conversão em arquivo "conversoes.txt" com data e hora
void salvarConversao(Conversao *c) {
    FILE *fp = fopen("conversoes.txt", "a");
    if (fp == NULL) {
        printf("Erro ao abrir arquivo para salvar a conversão.\n");
        return;
    }

    // Obtém a hora atual

    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    /* É como se eu escrevesse

       struct tm {
            int tm_sec;   // 0–60
            int tm_min;   // 0–59
            int tm_hour;  // 0–23
            int tm_mday;  // 1–31 (dia do mês)
            int tm_mon;   // 0–11 (mês começa em 0)
            int tm_year;  // anos desde 1900
            int tm_wday;  // 0–6 (domingo = 0)
            int tm_yday;  // 0–365
            int tm_isdst; // horário de verão
    };
*/

    char buffer[25];

    // DD/MM/AAAA HH:MM:SS

    strftime(buffer, 25, "%d/%m/%Y %H:%M:%S", tm_info); 

    // Determina a precisão ideal para o histórico
    int precisaoOrigem = 3;
    int precisaoConvertido = 3;

    // Salva no arquivo de forma organizada com precisão adequada
    fprintf(fp, "----------------------------------------\n");
    fprintf(fp, "Data/Hora: %s\n", buffer);
    fprintf(fp, "Valor original: %.*f %s\n", precisaoOrigem, c->valorOrigem, c->unidadeOrigem);
    fprintf(fp, "Valor convertido: %.*f %s\n", precisaoConvertido, c->valorConvertido, c->unidadeDestino);
    fprintf(fp, "----------------------------------------\n\n");

    // Exemplo do output

    /*
        ----------------------------------------
        Data/Hora: 26/11/2025 20:33:34
        Valor original: 2,500 m
        Valor convertido: 250,000 cm
        ----------------------------------------
    */

    fclose(fp);
}

void lerHistorico() {
    FILE *fp = fopen("conversoes.txt", "r");
    if (fp == NULL) {
        printf(RED "Nenhum histórico encontrado. O arquivo ainda não foi criado.\n" RESET);
        return;
    }

    char linha[256];

    titulo("HISTÓRICO DE CONVERSÕES");

    while (fgets(linha, sizeof(linha), fp)) {
        printf("%s", linha);
    }

    printf(YELLOW "\n--- Fim do histórico ---\n\n" RESET);

    fclose(fp);
}

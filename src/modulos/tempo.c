#include <stdio.h>
#include <string.h>
#include "tempo.h"
#include "utils.h"

// ======================== CONVERSOR DE TEMPO ========================

void seg_min() {
    Conversao c;
    printf("Digite o valor em Segundos (s): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 60.0f;
    strcpy(c.unidadeOrigem, "s");
    strcpy(c.unidadeDestino, "min");

    printf("Resultado: %.2f s = %.2f min\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void seg_hour() {
    Conversao c;
    printf("Digite o valor em Segundos (s): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 3600.0f;
    strcpy(c.unidadeOrigem, "s");
    strcpy(c.unidadeDestino, "h");

    printf("Resultado: %.2f s = %.2f h\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void min_seg() {
    Conversao c;
    printf("Digite o valor em Minutos (min): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 60.0f;
    strcpy(c.unidadeOrigem, "min");
    strcpy(c.unidadeDestino, "s");

    printf("Resultado: %.2f min = %.2f s\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void min_hour() {
    Conversao c;
    printf("Digite o valor em Minutos (min): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 60.0f;
    strcpy(c.unidadeOrigem, "min");
    strcpy(c.unidadeDestino, "h");

    printf("Resultado: %.2f min = %.2f h\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void hour_seg() {
    Conversao c;
    printf("Digite o valor em Horas (h): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 3600.0f;
    strcpy(c.unidadeOrigem, "h");
    strcpy(c.unidadeDestino, "s");

    printf("Resultado: %.2f h = %.2f s\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void hour_min() {
    Conversao c;
    printf("Digite o valor em Horas (h): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 60.0f;
    strcpy(c.unidadeOrigem, "h");
    strcpy(c.unidadeDestino, "min");

    printf("Resultado: %.2f h = %.2f min\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

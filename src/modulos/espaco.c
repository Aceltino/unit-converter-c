#include <stdio.h>
#include <string.h>
#include "headers/espaco.h"
#include "utils.h"

// ======================== CONVERSOR DE ESPAÇO ========================

void km_m() {
    Conversao c;
    printf("Digite o valor em Quilômetros (km): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1000.0f;
    strcpy(c.unidadeOrigem, "km");
    strcpy(c.unidadeDestino, "m");

    printf("Resultado: %.3f km = %.3f m\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void m_cm() {
    Conversao c;
    printf("Digite o valor em Metros (m): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 100.0f;
    strcpy(c.unidadeOrigem, "m");
    strcpy(c.unidadeDestino, "cm");

    printf("Resultado: %.3f m = %.3f cm\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void mm_m() {
    Conversao c;
    printf("Digite o valor em Milímetros (mm): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1000.0f;
    strcpy(c.unidadeOrigem, "mm");
    strcpy(c.unidadeDestino, "m");

    printf("Resultado: %.3f mm = %.6f m\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void cm_pol() {
    Conversao c;
    printf("Digite o valor em Centímetros (cm): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 2.54f;
    strcpy(c.unidadeOrigem, "cm");
    strcpy(c.unidadeDestino, "in");

    printf("Resultado: %.3f cm = %.3f in\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void pol_cm() {
    Conversao c;
    printf("Digite o valor em Polegadas (in): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 2.54f;
    strcpy(c.unidadeOrigem, "in");
    strcpy(c.unidadeDestino, "cm");

    printf("Resultado: %.3f in = %.3f cm\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void jarda_m() {
    Conversao c;
    printf("Digite o valor em Jardas (yd): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 0.9144f;
    strcpy(c.unidadeOrigem, "yd");
    strcpy(c.unidadeDestino, "m");

    printf("Resultado: %.3f yd = %.4f m\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void m_milha() {
    Conversao c;
    printf("Digite o valor em Metros (m): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1609.34f;
    strcpy(c.unidadeOrigem, "m");
    strcpy(c.unidadeDestino, "mi");

    printf("Resultado: %.3f m = %.6f mi\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

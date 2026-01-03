#include <stdio.h>
#include <string.h>
#include "massa.h"
#include "utils.h"

// ======================== CONVERSOR DE MASSA ========================

void kg_g() {
    Conversao c;
    printf("Digite o valor em Quilogramas (kg): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1000.0f;
    strcpy(c.unidadeOrigem, "kg");
    strcpy(c.unidadeDestino, "g");

    printf("Resultado: %.2f kg = %.2f g\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void kg_t() {
    Conversao c;
    printf("Digite o valor em Quilogramas (kg): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1000.0f;
    strcpy(c.unidadeOrigem, "kg");
    strcpy(c.unidadeDestino, "t");

    printf("Resultado: %.2f kg = %.6f t\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void g_kg() {
    Conversao c;
    printf("Digite o valor em Gramas (g): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1000.0f;
    strcpy(c.unidadeOrigem, "g");
    strcpy(c.unidadeDestino, "kg");

    printf("Resultado: %.2f g = %.2f kg\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void g_t() {
    Conversao c;
    printf("Digite o valor em Gramas (g): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1000000.0f;
    strcpy(c.unidadeOrigem, "g");
    strcpy(c.unidadeDestino, "t");

    printf("Resultado: %.2f g = %.9f t\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void t_kg() {
    Conversao c;
    printf("Digite o valor em Toneladas (t): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1000.0f;
    strcpy(c.unidadeOrigem, "t");
    strcpy(c.unidadeDestino, "kg");

    printf("Resultado: %.2f t = %.2f kg\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void t_g() {
    Conversao c;
    printf("Digite o valor em Toneladas (t): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1000000.0f;
    strcpy(c.unidadeOrigem, "t");
    strcpy(c.unidadeDestino, "g");

    printf("Resultado: %.2f t = %.2f g\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

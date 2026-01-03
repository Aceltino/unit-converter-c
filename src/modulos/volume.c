#include <stdio.h>
#include <string.h>
#include "volume.h"
#include "utils.h"

// ======================== CONVERSOR DE VOLUME ========================

void litro_ml() {
    Conversao c;
    printf("Digite o valor em Litros (L): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1000.0f;
    strcpy(c.unidadeOrigem, "L");
    strcpy(c.unidadeDestino, "mL");

    printf("Resultado: %.2f L = %.2f mL\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void litro_m3() {
    Conversao c;
    printf("Digite o valor em Litros (L): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1000.0f;
    strcpy(c.unidadeOrigem, "L");
    strcpy(c.unidadeDestino, "m3");

    printf("Resultado: %.2f L = %.6f m3\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void ml_litro() {
    Conversao c;
    printf("Digite o valor em Mililitros (mL): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1000.0f;
    strcpy(c.unidadeOrigem, "mL");
    strcpy(c.unidadeDestino, "L");

    printf("Resultado: %.2f mL = %.3f L\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void ml_m3() {
    Conversao c;
    printf("Digite o valor em Mililitros (mL): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem / 1000000.0f;
    strcpy(c.unidadeOrigem, "mL");
    strcpy(c.unidadeDestino, "m3");

    printf("Resultado: %.2f mL = %.9f m3\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void m3_litro() {
    Conversao c;
    printf("Digite o valor em Metros Cúbicos (m3): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1000.0f;
    strcpy(c.unidadeOrigem, "m3");
    strcpy(c.unidadeDestino, "L");

    printf("Resultado: %.2f m3 = %.2f L\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void m3_ml() {
    Conversao c;
    printf("Digite o valor em Metros Cúbicos (m3): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1000000.0f;
    strcpy(c.unidadeOrigem, "m3");
    strcpy(c.unidadeDestino, "mL");

    printf("Resultado: %.2f m3 = %.2f mL\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

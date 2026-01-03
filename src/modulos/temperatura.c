#include <stdio.h>
#include <string.h>
#include "temperatura.h"
#include "utils.h"

// ======================== CONVERSOR DE TEMPERATURA ========================

void cel_fah() {
    Conversao c;
    printf("Digite o valor em Celsius (°C): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem * 1.8f + 32.0f;
    strcpy(c.unidadeOrigem, "°C");
    strcpy(c.unidadeDestino, "°F");

    printf("Resultado: %.2f °C = %.2f °F\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void cel_kel() {
    Conversao c;
    printf("Digite o valor em Celsius (°C): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem + 273.15f;
    strcpy(c.unidadeOrigem, "°C");
    strcpy(c.unidadeDestino, "K");

    printf("Resultado: %.2f °C = %.2f K\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void fah_cel() {
    Conversao c;
    printf("Digite o valor em Fahrenheit (°F): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = (c.valorOrigem - 32.0f) * 5.0f / 9.0f;
    strcpy(c.unidadeOrigem, "°F");
    strcpy(c.unidadeDestino, "°C");

    printf("Resultado: %.2f °F = %.2f °C\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void fah_kel() {
    Conversao c;
    printf("Digite o valor em Fahrenheit (°F): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = ((c.valorOrigem - 32.0f) / 1.8f) + 273.15f;
    strcpy(c.unidadeOrigem, "°F");
    strcpy(c.unidadeDestino, "K");

    printf("Resultado: %.2f °F = %.2f K\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void kel_cel() {
    Conversao c;
    printf("Digite o valor em Kelvin (K): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = c.valorOrigem - 273.15f;
    strcpy(c.unidadeOrigem, "K");
    strcpy(c.unidadeDestino, "°C");

    printf("Resultado: %.2f K = %.2f °C\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

void kel_fah() {
    Conversao c;
    printf("Digite o valor em Kelvin (K): ");

    if (!lerFloat(&c.valorOrigem)) return;

    c.valorConvertido = (c.valorOrigem - 273.15f) * 1.8f + 32.0f;
    strcpy(c.unidadeOrigem, "K");
    strcpy(c.unidadeDestino, "°F");

    printf("Resultado: %.2f K = %.2f °F\n", c.valorOrigem, c.valorConvertido);
    salvarConversao(&c);
}

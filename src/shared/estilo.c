#include "headers/estilo.h"

void printAnimado(const char *s) {
    while (*s) { putchar(*s++); fflush(stdout); usleep(40000); }
}

void barraProgresso() {
    printf(CYAN "Configurando conversor" RESET);
    for(int i = 0; i < 7; i++) {
        printf(CYAN "." RESET); fflush(stdout); usleep(120000);
    }
    printf("\n");
}

void titulo(const char *t) {
    int len = (int)strlen(t);
    printf(MAGENTA "╔"); for(int i=0;i<len+2;i++) printf("═"); printf("╗\n");
    printf("║ %s ║\n", t);
    printf("╚"); for(int i=0;i<len+2;i++) printf("═"); printf("╝\n" RESET);
}

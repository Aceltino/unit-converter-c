#ifndef ESTILO_H
#define ESTILO_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// Funções animadas e de estilo
void printAnimado(const char *s);
void barraProgresso();
void titulo(const char *t);

#endif

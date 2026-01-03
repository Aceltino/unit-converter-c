#include <stdio.h>
#include <locale.h>

#include "menus.h"
#include "shared/headers/estilo.h"
#include "shared/headers/utils.h"
#include "shared/headers/conversao.h"   // ← IMPORTANTE

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    do {
        printf("\n");
        titulo("CONVERSOR GLOBAL");
        printf(YELLOW "1 - Conversor de Espaço\n" RESET);
        printf(YELLOW "2 - Conversor de Temperatura\n" RESET);
        printf(YELLOW "3 - Conversor de Tempo\n" RESET);
        printf(YELLOW "4 - Conversor de Massa\n" RESET);
        printf(YELLOW "5 - Conversor de Volume\n" RESET);
        printf(YELLOW "6 - Ver Histórico de Conversões\n" RESET);
        printf(YELLOW "0 - Sair\n" RESET);

        printf(CYAN "Escolha: " RESET);

        opcao = lerOpcao(0, 6);

        switch(opcao){
            case 1: menuEspaco(); break;
            case 2: menuTemp(); break;
            case 3: menuTempo(); break;
            case 4: menuMassa(); break;
            case 5: menuVolume(); break;
            case 6: lerHistorico(); break;   // ← AQUI !!!
        }

    } while(opcao != 0);

    printAnimado(GREEN "Encerrando o programa... Até logo! \n" RESET);
    return 0;
}

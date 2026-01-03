#include <stdio.h>
#include "menus.h"
#include "modulos/headers/espaco.h"
#include "modulos/headers/temperatura.h"
#include "modulos/headers/tempo.h"
#include "modulos/headers/massa.h"
#include "modulos/headers/volume.h"
#include "shared/headers/estilo.h"
#include "shared/headers/utils.h" 

// ======================== MENUS ========================

void menuEspaco() {
    int op;
    do {
        titulo("CONVERSOR DE ESPAÇO");
        printf(YELLOW
            "1 - km -> m\n"
            "2 - m -> cm\n"
            "3 - mm -> m\n"
            "4 - cm -> in\n"
            "5 - in -> cm\n"
            "0 - Voltar\n" RESET);

        op = lerOpcao(0, 5);

        switch(op){
            case 1: barraProgresso(); km_m(); break;
            case 2: barraProgresso(); m_cm(); break;
            case 3: barraProgresso(); mm_m(); break;
            case 4: barraProgresso(); cm_pol(); break;
            case 5: barraProgresso(); pol_cm(); break;
        }

    } while(op != 0);
}

void menuTemp() {
    int op;
    do {
        titulo("CONVERSOR DE TEMPERATURA");
        printf(YELLOW
            "1 - C -> F\n"
            "2 - C -> K\n"
            "3 - F -> C\n"
            "4 - F -> K\n"
            "5 - K -> C\n"
            "0 - Voltar\n" RESET);

        op = lerOpcao(0, 5);

        switch(op){
            case 1: barraProgresso(); cel_fah(); break;
            case 2: barraProgresso(); cel_kel(); break;
            case 3: barraProgresso(); fah_cel(); break;
            case 4: barraProgresso(); fah_kel(); break;
            case 5: barraProgresso(); kel_cel(); break;
        }

    } while(op != 0);
}

void menuTempo() {
    int op;
    do {
        titulo("CONVERSOR DE TEMPO");
        printf(YELLOW
            "1 - s -> min\n"
            "2 - s -> h\n"
            "3 - min -> s\n"
            "4 - min -> h\n"
            "5 - h -> s\n"
            "0 - Voltar\n" RESET);

        op = lerOpcao(0, 5);

        switch(op){
            case 1: barraProgresso(); seg_min(); break;
            case 2: barraProgresso(); seg_hour(); break;
            case 3: barraProgresso(); min_seg(); break;
            case 4: barraProgresso(); min_hour(); break;
            case 5: barraProgresso(); hour_seg(); break;
        }

    } while(op != 0);
}

void menuMassa() {
    int op;
    do {
        titulo("CONVERSOR DE MASSA");
        printf(YELLOW
            "1 - kg -> g\n"
            "2 - kg -> t\n"
            "3 - g -> kg\n"
            "4 - g -> t\n"
            "5 - t -> kg\n"
            "0 - Voltar\n" RESET);

        op = lerOpcao(0, 5);

        switch(op){
            case 1: barraProgresso(); kg_g(); break;
            case 2: barraProgresso(); kg_t(); break;
            case 3: barraProgresso(); g_kg(); break;
            case 4: barraProgresso(); g_t(); break;
            case 5: barraProgresso(); t_kg(); break;
        }

    } while(op != 0);
}

void menuVolume() {
    int op;
    do {
        titulo("CONVERSOR DE VOLUME");
        printf(YELLOW
            "1 - L -> mL\n"
            "2 - L -> m3\n"
            "3 - mL -> L\n"
            "4 - mL -> m3\n"
            "5 - m3 -> L\n"
            "0 - Voltar\n" RESET);

        op = lerOpcao(0, 5);

        switch(op){
            case 1: barraProgresso(); litro_ml(); break;
            case 2: barraProgresso(); litro_m3(); break;
            case 3: barraProgresso(); ml_litro(); break;
            case 4: barraProgresso(); ml_m3(); break;
            case 5: barraProgresso(); m3_litro(); break;
        }

    } while(op != 0);
}

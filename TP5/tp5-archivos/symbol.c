
#include <stdio.h>
#include "scanner.h"
#include "parser.h"
#include "semantic.h"
#include "symbol.h"

#define max 200

char *TDS[max];
int ultimo = 0;

int buscar (char * cadena) {        // si lo encuentra retorna 1
    for (int i=0 ; i < ultimo ; i++) {
        if (!strcmp(TDS[i],cadena)) { // if(cadena == TDS[i]) {
            return 1;
        }
    }
    return 0;
}

void colocar (char *cadena) {
    if (ultimo < max) {
        TDS[ultimo]= cadena;
        ultimo++;
    } else
    printf("\n Se llenó la tabla de símbolos");
}



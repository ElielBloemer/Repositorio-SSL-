#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char buffer[100] ;

int get_token();

enum TOKEN {
    // cuando se ley� EOF
    FDT,
    // solo coma
    SEP,
    // sucesi�n de caracteres
    CAD
    };





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char buffer[100] ;

int get_token();

enum TOKEN {
    // cuando se leyó EOF
    FDT,
    // solo coma
    SEP,
    // sucesión de caracteres
    CAD
    };





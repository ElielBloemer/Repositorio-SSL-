#include "scanner.h"

int get_token()
{
    char caracter;
    //quemo espacios
    while (isspace(caracter = getchar())){};

     if (caracter == EOF){
        return FDT;
    }

     else if (caracter == ','){
        buffer[0] = caracter;
        return SEP;
    }

    else{
        int i = 0;

        while(caracter!= ',' && !isspace(caracter) && caracter != EOF){
            buffer[i] = caracter;
            caracter = getchar();
            i++;
        }
        ungetc(caracter, stdin);// aca vuelvo a poner a meter el caracter
        //despues de termina la cadena marco con \0 para decir que es el fin de la cadena,
        //pq puede ser que existe cadena mas largas que necesite leida antes y se metio una mas chica
        buffer[i]='\0';

        return CAD;
    }
}

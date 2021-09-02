#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "scanner.h"

int main()
{


    enum TOKEN token;


    do{

        token = get_token();//busco el token

         switch (token)
        {
           case SEP:
              printf("Separador: %c\n", buffer[0]);
              break;
           case CAD:
              printf("Cadena: %s\n", buffer);
              buffer[0] = '\0';
              break;
           case FDT:
             printf("Fin de texto: \n");
             break;
          }
        }while(token != FDT);





    return 0;
}

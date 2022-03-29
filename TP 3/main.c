
#include "scanner.h"

char *salida[] = {"Fin de archivo","Programa","Entero","Leer","Escribir","Fin-Programa","Asignacion","Identificador","Constante"};

int main()
{
	int TOKEN;
	do
	{
		TOKEN = yylex();
		if(TOKEN <= ASIGNACION){
			printf("Token: %s\n",salida[TOKEN]);
		}
		else if(TOKEN == IDENTIFICADOR || TOKEN == CONSTANTE){
			printf("Token: %s\tlexema: %s\n",salida[TOKEN],yytext);
		}
		else{//caracter
			printf("Token: \'%c\'\n",TOKEN);
		}		 
	} while(TOKEN != FDT);
        
	return 0;		
}

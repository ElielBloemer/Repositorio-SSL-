/* - GRUPO13
- Casanova Gonzalo Javier
- Zadkiel Lopez
- Eliel Bloemer Correa*/

#include <stdio.h>
#include "parser.h"

int main(void)
{	
	switch(yyparse()){
		case 0:
			printf("Compilación finalizada con éxito\n");
			break;
		case 1:
			printf("Errores de compilación\n"); 
			break;
		case 2:
			printf("Memoria insuficiente\n");
			break;
	}
	printf("Errores sintácticos: %d - Errores léxicos: %d - Errores semánticos: %d\n",yynerrs,yylexerrs,errsemtc);
	return 0;
}

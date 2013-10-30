#include <stdio.h>
#include <string.h>

int main(){
	char cadena[100];
	int longitud_cadena, i;
	while(fgets(cadena, 99, stdin)){
		longitud_cadena = strlen(cadena);
		for ( i = 0 ; i < longitud_cadena-1 ; i++)
			printf("%c", cadena[i]-7);
		printf("\n");
	}
	return 0;
}

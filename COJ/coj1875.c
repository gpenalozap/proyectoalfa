#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int casos, radio, i = 0, longitud, j;
	char salida[30];
	scanf ("%d",&casos);
	while(i < casos){
		scanf("%d",&radio);
		sprintf(salida,"%.2f\n", (6*radio*sqrt(radio*radio*0.75))/2.0);		
		longitud = strlen(salida);
		for (j = 0 ; j < longitud ; j++){
			if (salida[j]==',')
				printf(".");
			else
				printf("%c",salida[j]);
		}
		i++;
	}
	return 0;
}

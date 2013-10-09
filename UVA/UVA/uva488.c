#include <stdio.h>

int main(){
	int casos, amplitud, frecuencia;
	int i = 0, j, l, m;
	scanf("%d", &casos);
	while(i < casos){
		scanf ("%d", &amplitud);
		scanf ("%d", &frecuencia);
		j = 0;
		while (j < frecuencia){
			for (l = 1 ; l <= amplitud ; l++){
				for (m = 1 ; m <= l ; m++)
					printf("%d",l);
				printf("\n");
			}
			for (l = amplitud-1 ; l > 0 ; l--){
				for (m = 1 ; m <= l ; m++)
					printf("%d",l);
				printf("\n");
			}
			j++;
			if (j < frecuencia)
				printf("\n");
		}
		i++;
		if (i < casos)
			printf("\n");
	}
	return 0;
}

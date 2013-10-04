#include <stdio.h>
#include <string.h>

int main(){
	char numero[1010];
	int t, longitud, i, sumatoria, aux;
	for (scanf("%d",&t); t ; t--){
		scanf("%s",numero);
		longitud = strlen(numero);
		sumatoria = 0;
		for (i = 0 ; i < longitud ; i++)
			sumatoria += (numero[i] - 48);
		
		if (sumatoria%3 == 0 && sumatoria%2 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}


#include <stdio.h>

int modulos[42];

int main(){
	int i, total = 0, n;
	for (i = 0 ; i < 10 ; i++){
		scanf("%d", &n);
		modulos[n%42] = 1;
	}
	for (i = 0 ; i < 42 ; i++)
		total+=modulos[i];
	printf("%d\n", total);
	return 0;
}

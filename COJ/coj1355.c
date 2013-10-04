#include <stdio.h>

#define PI 3.141592653589793

int main(){
	float lado;
	while(scanf("%f",&lado) > 0){
		printf ("%.4f\n", (lado*lado) * (2/3.0 - PI/9.0));
	}
	return 0;
}


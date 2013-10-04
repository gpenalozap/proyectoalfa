#include <stdio.h>

#define MAX 10001

int F[MAX];

int main(){
	int i, n, x;
	int a, b, c;
	F[0] = 0;
	F[1] = 1;
	
	for ( i = 2 ; i < MAX ; i++)
		F[i] = (F[i-1]+F[i-2])%10000;
	
	i = 0;
	scanf("%d", &n);
	
	
	while(i < n){
		scanf("%d", &x);
		if ((x-2) > 10000 || (x-2) < 0)
			a = 0;
		else 
			a = x-2;
		if ((x-1) > 10000 || (x-1) < 0)
			b = 0;
		else 
			b = x-1;
		if (x > 10000 || x < 0)
			c = 0;
		else 
			c = x;
		printf("%d %d %d\n", F[a], F[b], F[c]);
		i++;
	}
	return 0;
}

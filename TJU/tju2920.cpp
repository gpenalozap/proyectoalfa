#include <stdio.h>

#define MAX 1000001

long long int a[MAX], b[MAX];


int main(){
	a[1] = 1;
	b[1] = 1;
	for ( int i = 2 ; i < MAX ; i++){
		a[i] = a[i-1]+i;
		b[i] = a[i] + b[i-1];
	}
	int n;
	while( scanf("%d", &n)==1)
		printf("%lld\n", b[n]);
}

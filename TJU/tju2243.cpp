#include <stdio.h>
#define MAX 1100

int longitud_ciclo[MAX];

int collatz(long long int n){
    if (n >= MAX){
        if (n&1){
            return collatz(3*n+1)+1;
        }
        else{
            return collatz(n>>1)+1;
        }
    }
    else{
        if (n == 1){
            return longitud_ciclo[n] = 1;
        }
        if (n&1){
            return longitud_ciclo[n] = collatz(3*n+1)+1;
        }
        else{
            return longitud_ciclo[n] = collatz(n>>1)+1;
        }
    }
}

int main(){
    int i;
    for (i = 1 ; i < MAX ; i++)
        collatz(i);
    while (1){
        scanf("%d", &i);
        if (i == 0)
            return 0;
        printf("%d\n", longitud_ciclo[i]);
    }
    return 0;
}



#include <stdio.h>
#define MAX 1000000

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

int resuelve(int i, int j){
    int t, maximo = 0;
    if (i > j){
        t = i;
        i = j;
        j = t;
    }
    for ( ; i <= j ;i++ ){
        maximo = longitud_ciclo[i] > maximo ? longitud_ciclo[i] : maximo;
    }
    return maximo;
}

int main(){
    int i, j;
    for (i = 1 ; i < MAX ; i++)
        collatz(i);
    while (scanf("%d %d", &i, &j) == 2){
        printf("%d %d %d\n", i, j,resuelve(i, j));
    }
    return 0;
}


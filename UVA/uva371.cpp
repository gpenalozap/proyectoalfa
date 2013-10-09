#include <stdio.h>
#define MAX 2000000

int longitud_ciclo[MAX];
int posicion;

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
            return longitud_ciclo[n] = 0;
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
    posicion = -1;
    for ( ; i <= j ;i++ ){
        if (longitud_ciclo[i] > maximo){
            maximo = longitud_ciclo[i];
            posicion = i;
        }
    }
    return maximo;
}

int main(){
    int i, j;
    for (i = 1 ; i < MAX ; i++)
        collatz(i);
    for( ; ; ){
        scanf("%d %d", &i, &j);
        if ( i+j == 0)
            break;
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n", i, j,posicion, resuelve(i, j));
    }
    return 0;
}


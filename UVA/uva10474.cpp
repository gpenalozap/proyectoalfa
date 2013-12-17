#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int n, q, ci;
    for (ci = 1 ; ; ci++){
        scanf("%d %d", &n, &q);
        if ( n==0 && q==0)
            break;
        int numeros[n];
        for (int i = 0; i < n ; i++)
            scanf("%d", &numeros[i]);
        sort(&numeros[0], &numeros[n]);
        printf("CASE# %d:\n",ci);
        for (int i = 0; i < q ; i++){
            int buscar;
            scanf ("%d", &buscar);
            int* pos = lower_bound(&numeros[0], &numeros[n], buscar);
            if (pos == &numeros[n] || *pos != buscar)
                printf("%d not found\n", buscar);
            else
                printf("%d found at %d\n",buscar, pos-&numeros[0]+1);
        }
    }

}

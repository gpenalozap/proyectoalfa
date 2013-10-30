#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int efectivo = 0, deuda = 0, posicion = -1, pasos = 0;
    scanf("%d", &n);
    for (i = 1 ; i <= n ; i++){
        int m;
        scanf("%d", &m);
        pasos++;
        if (m >0)
            efectivo+=m;
        else{
            deuda +=m;
            if (posicion == -1)
                posicion = i;
        }

        if ( efectivo >= abs(deuda) && deuda < 0){
            pasos = pasos + (i-posicion)*2;
            posicion = -1;
            efectivo = efectivo + deuda;
            deuda = 0;
        }
    }
    printf("%d\n", pasos);
    return 0;
}

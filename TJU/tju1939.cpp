#include<stdio.h>

int main(){
    int acum, dis, n, vel, suma;
    int i;
    for (;;){
        scanf("%d", &n);
        if (n == -1)
            break;
        suma = 0;
        acum = 0;
        for ( i = 0 ; i < n ; i++){
            scanf("%d %d", &vel, &dis);
            suma = suma + ((dis - acum)*vel);
            acum = dis;
        }
        printf("%d miles\n",suma);
    }
    return 0;
}

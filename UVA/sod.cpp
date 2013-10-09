#include <stdio.h>


int sod(int n){
    int suma = 0;
    do{
        suma+=(n%10);
        n = n/10;
    }while(n>0);
    n = suma;
    suma = 0;
    do{
        suma+=(n%10);
        n = n/10;
    }while(n>0);
    return suma;
}

int main(){
    int n;
    while(1){
        scanf("%d", &n);
        printf("%d\n",sod(n));
    }
    return 0;
}

#include <stdio.h>


int sod(int n){
    int suma = 0;
    do{
        suma+=(n%10);
        n = n/10;
    }while(n>0);
    return suma;
}

int fun(int a, int b) {
    /*printf("Funcion de dos parametros\n");*/
    int ans = 0;
    int i, j, cnt;
    for(i=a; i<=b; i++) {
        cnt = 0;
        for(j=1; j<=i; j++) {
            if( j + sod(j) == i ) cnt++;
        }
        if( cnt == 0 ) ans++;
    }
    return ans;
}

int fun(int a) {
     int i;
     /*printf("Funcion de un parametro\n");*/
     for(i=1; i<=a; i++){
          if( i + sod(i) == a ){
              return i;
          }
    }
    return -1;
}

int main(){
    int casos, i, a, b, r, n;
    char linea[20];
    scanf ("%d", &casos);
    i=1;
    while(i <= casos){
        fgets(linea, 20, stdin);
        n=sscanf(linea, "%d %d", &a, &b);
        if(n==1)
            r = fun (a);
        else if(n==2)
            r = fun( a,b);
        if(n>0)
        {
            printf("Case %d: %d\n", i, r);
            ++i;
        }
    }
    return 0;
}

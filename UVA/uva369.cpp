#include <stdio.h>

int combinaciones(int n, int m){
    int x, i, y;
    long long int a, b;
    if (m >= (n-m)){
        x = m;
        y = n - m;
    }
    else{
        x = n - m;
        y = m;
    }
    a = 1;
    for ( i = x+1 ; i <= n ; i++)
        a*=i;
    b = 1;
    for ( i = 2 ; i <= y ; i++)
        b*=i;
    return a/b;
}


int main(){
    int n, m;
    for ( ; ; ){
        scanf("%d %d", &n, &m);
        if ( n+m == 0)
            break;
        printf("%d things taken %d at a time is %d exactly.\n",n , m, combinaciones(n,m));
    }
    return 0;
}

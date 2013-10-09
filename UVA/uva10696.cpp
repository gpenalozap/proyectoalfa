#include<stdio.h>

#define MAX 1000001

int f[MAX]={};

int f91(int n){
    if ( f[n] )
        return f[n];
    else{
        if (n >= MAX){
            if (n <= 100)
                return f91(f91(n+11));
            else
                return (n - 10) ;
        }
        else{
            if (n <= 100)
                return f[n]=f91(f91(n+11));
            else
                return f[n]= n - 10 ;
        }
    }
}

int main(){
    int n;
    for (int i = 0 ; i < MAX ; i++)
        f[i] = f91(i);

    for( ; ; ){
        scanf("%d", &n);
        if (n == 0)
            break;
        printf("f91(%d) = %d\n", n, f[n]);
    }

    return 0;
}

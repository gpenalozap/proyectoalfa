#include<cstdio>

int main(){
    int n, m, par, impar, x;
    scanf("%d", &n);
    while(n--){
        scanf ("%d", &m);
        par = 0;
        impar = 0;
        while(m--){
            scanf("%d", &x);
            if (x&1)
                impar++;
            else
                par++;
        }
        printf("%d even and %d odd.\n", par, impar);
    }
    return 0;
}

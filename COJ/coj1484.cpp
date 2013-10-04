#include<cstdio>

int main(){
    int n, i, p;
    float t, m;
    p = 0;
    m = -21223.21314;
    scanf("%d", &n);
    i = 1;
    while(i<=n){
        scanf("%f", &t);
        if ( t >= m){
            p = i;
            m = t;
        }
        i++;
    }
    printf("%d\n", p);
    return 0;
}

#include<cstdio>

int mcd(int a, int b){
    if (b == 0)
        return a;
    else
        return mcd(b, a%b);
}

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) == 2){
        printf("%d\n", y/mcd(x,y));
    }
    return 0;
}

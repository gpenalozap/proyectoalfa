#include<cstdio>

int main(){
    int n;
    int a, b, s;
    scanf("%d", &n);
    while(n--){
        s = 0;
        scanf("%d %d", &a, &b);
        for (int i = a ; i <= b ; i++){
            s = s + (i*(i+1)*(i+2) )%100;
        }
        printf("%d\n", s);
    }
    return 0;
}

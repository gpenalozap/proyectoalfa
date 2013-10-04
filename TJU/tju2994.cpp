#include <stdio.h>

int x[10], y[10];

int main(){
    int n, l, dot;
    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &l);
        for (int j = 0 ; j < l ; j++){
            scanf("%d", &x[j]);
        }
        dot = 0;
        for (int j = 0 ; j < l ; j++){
            scanf("%d", &y[j]);
            dot += x[j] * y[j];
        }
        printf("%d\n", dot);
    }
    return 0;
}

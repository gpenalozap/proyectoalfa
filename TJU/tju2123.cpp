#include <stdio.h>

int main(){
    int j, n, i, m;
    for (;;){
        scanf("%d", &n);
        if (n == 0)
            break;
        j = 0;
        for (i = 0 ; i < n ; i++){
            scanf("%d", &m);
            j+=m;
        }
        printf("Mary won %d times and John won %d times\n", n-j, j);
    }
    return 0;
}

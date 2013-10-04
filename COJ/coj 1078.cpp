#include <stdio.h>

int main(){
    int n, i, c, m, a;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        i = 0;
        c = 0;
        while(i < m){
            i++;
            scanf("%d", &a);
            c+=a;
        }
        if (c%m == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

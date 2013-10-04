#include <cstdio>

int main(){
    int n;
    int x, y, d;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &x, &y);
        d = x-y;
        if (d == 0){
            if (x&1){
                printf("%d\n",x+y-1);
            }
            else{
                printf("%d\n", x+y);
            }
        }
        else if (d == 2){
            if (x&1){
                printf("%d\n",x+y-1);
            }
            else{
                printf("%d\n", x+y);
            }
        }
        else{
            printf("No Number\n");
        }
    }
    return 0;
}

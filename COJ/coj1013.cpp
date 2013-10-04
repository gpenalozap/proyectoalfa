#include<cstdio>
#include<cmath>

int main(){
    int x, i;
    float div;
    while (1){
        scanf("%d", &x);
        if (x == 0)
            break;
        if (x == 1)
        {
            printf("32\n");
        }
        else
            for (i = 2 ; i <= x ; i++){
                div = log(x) / log(i);
                if (div-trunc(div) == 0)
                    break;
            }
        printf("%d\n", int(div));
    }
    return 0;
}

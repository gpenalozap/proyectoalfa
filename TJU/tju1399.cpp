#include<cstdio>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, i, j;
        scanf("%d", &a);
        int minn = 1<<30;
        for (i = 1 ; i <= a/2 ; i++){
            if (a%i == 0){
                int b = a / i;
                for (j = 1 ; j <=b/2 ; j++){
                    if (b%j == 0){
                        int c = b / j;
                        int d = 2*(i*j+j*c+c*i);
                        if(d < minn)
                            minn = d;
                    }
                }
            }
        }
        printf("%d\n",minn);
    }

    return 0;
}

#include<cstdio>

int main(){
    int A, B, C;
    while(scanf("%d %d %d", &A, &B, &C) == 3){
        int suma = A + B + C;
        if (suma == 0 || suma == 3){
            printf ("*\n");
        }
        else{
            if (suma == 1){
                if (A == 1)
                    printf("A\n");
                else if (B == 1)
                    printf("B\n");
                else
                    printf("C\n");
            }
            else{
                if (A == 0)
                    printf("A\n");
                else if (B == 0)
                    printf("B\n");
                else
                    printf("C\n");
            }
        }
    }
    return 0;
}

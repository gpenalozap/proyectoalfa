#include<cstdio>

using namespace std;

int x[10];
int a[10];
int sol[10];

void suma(int n){
    int i, s, e;
    if (n > 0){
        x[n] = 1;
        suma(n-1);
        x[n] = 0;
        suma(n-1);
    }
    else{
        s = 0;
        e = 0;
        for (i = 1 ; i <= 9 ; i++ ){
            s = s + a[i] * x[i];
            e = e + x[i];
        }
        if (s == 100 && e == 7){
            for (i = 1 ; i <= 9 ; i++ )
                if(x[i] == 1)
                    sol[i]=a[i];
                else
                    sol[i]=0;
        }
    }
    return;
}

int main(){
    int i;

    for (i = 1; i <= 9 ; i++){
        scanf("%d", &a[i]);
    }

    suma(9);

    for (i = 1; i <= 9 ; i++){
        if (sol[i]>0)
            printf("%d\n", sol[i]);
    }
    return 0;
}

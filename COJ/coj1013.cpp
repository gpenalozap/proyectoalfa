#include<cstdio>
#include<cmath>

int main(){
    int i;
    float x;
    float div;
    while (1){
        scanf("%f", &x);

        if (x == 0)
            break;

        if (x < 0)
            x = -x;
        div = floor(log(x)/log(2.0));
        for (; div >0 ; div -=1.0){
            float t = pow(x, 1/div);
            if( fabs( t - round( t ) ) < 1e-5 ) {
                if( x > 0.0 )
                    break;
                else
                    if( int( div + 1e-5 ) % 2 )
                        break;
            }

        }
        printf("%.0f\n", div);
    }
    return 0;
}



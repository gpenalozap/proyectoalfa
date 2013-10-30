#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int t, g, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        g = __gcd(a,b);
        int c = 1;
        for (int i = 2 ; i <= g ; i++){
            if (a%i == 0 && b%i == 0)
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}

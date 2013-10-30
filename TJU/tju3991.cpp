#include<stdio.h>
#include<vector>

using namespace std;

int main(){
    int t, n, m, i;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d", &n, &m);
        vector<int> x(n);
        vector<int> y(n);
        int suma = 0;

        for (i = 0 ; i < n ; i++){
            scanf("%d %d", &x[i], &y[i]);
            suma += x[i];
        }
        if (suma < m)
            printf("JUMP DOWN!\n");
        else if (suma == m)
            printf("0\n");
    }
    return 0;
}

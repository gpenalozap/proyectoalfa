#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n,m,i,j;
    string s;
    scanf("%d",&n);
    for (i = 1 ; i<=n ; i++){
        scanf("%d",&m);
        int cont = 0;
        for (j = 0 ; j<m ; j++){
            cin>>s;
            if (s == "sheep")
                cont++;
        }
        printf("Case %d: This list contains %d sheep.\n",i,cont);
        if (i < n)
            printf("\n");
    }
    return 0;
}

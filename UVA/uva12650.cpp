#include <cstdio>
#include <set>

using namespace std;


int main(){
    int i;
    int n, r, x;

    while (scanf("%d %d", &n, &r) == 2){
        set<int> v;
        for (i = 1 ; i <= n ; i++){
            v.insert(i);
        }
        for (i = 0 ; i < r ; i++){
            scanf("%d",&x);
            v.erase(x);
        }
        if (v.empty()){
            printf("*");
        }
        else{
            set<int>::iterator it;
            for (it = v.begin() ; it != v.end() ; it++)
                printf("%d ", *it);
        }
        printf("\n");
    }
    return 0;
}



#include<set>
#include<cstdio>

int main(){
    int n, i;
    std::set<int> v;

    for ( i = 1 ; i <= 10 ; i++){
        scanf("%d", &n);
        v.insert(n%42);
    }
    printf("%d\n", v.size());
    return 0;
}

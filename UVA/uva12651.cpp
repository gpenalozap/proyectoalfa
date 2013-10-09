#include<cstdio>
#include<set>

using namespace std;

set<int> a;

int main(){
    int n, i, suma, d, cont, x, y;
    while (scanf("%d", &n) == 1){
        suma = 0;
        a.insert(0);
        for (i = 0 ; i < n ;  i++){
            scanf("%d", &d);
            suma += d;
            a.insert(suma);
        }
        if ((suma%3)!= 0)
            printf("0\n");
        else{
            d = suma / 3;
            cont = 0;
            set<int>::iterator it;
            for(it = a.begin() ; *it < d ; it++){
                x = *it + d;
                y = x + d;
                if (a.find(x)!=a.end() && a.find(y)!=a.end())
                    cont++;
            }
            printf("%d\n",cont);
        }
        a.clear();
    }
    return 0;
}

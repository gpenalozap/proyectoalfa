#include<algorithm>
#include<cstdio>
#include<vector>

using namespace std;

bool myf(int a, int b){
    return a>b;
}

int main(){
    int n, i, x, flag;
    vector<int> v, sumas;
    for(;;){
        scanf("%d", &n);
        if(n == 0)
            return 0;
        //Lectura de los numeros
        for (i = 0; i < n ; i++){
            scanf("%d", &x);
            v.push_back(x);
        }

        //Calculando sumas
        for (int p = 0 ; p < (v.size()- 1); p++ )
            for (int q = p+1 ; q < v.size() ; q++)
                sumas.push_back(v[p]+v[q]);

        sort(sumas.begin(), sumas.end());
        sort(v.begin(), v.end(), myf);

        //Buscando numeros
        flag = 0;
        for (i = 0; i < n ; i++){
            if (binary_search(sumas.begin(), sumas.end(), v[i])){
                printf("%d\n", v[i]);
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("-1\n");

        sumas.clear();
        v.clear();
    }
    return 0;
}

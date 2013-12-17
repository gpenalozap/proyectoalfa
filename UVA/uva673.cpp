#include<cstring>
#include<vector>
#include<cstdio>

using namespace std;

int main(){
    char cadena[200];
    vector<char> pila;
    int i = 0, n, j, s;
    scanf("%d\n", &n);

    while(i<n){
        gets(cadena);
        s = strlen(cadena);
        for (j = 0 ; j < s; j++){
            if (cadena[j]=='(' || cadena[j]=='[')
                pila.push_back(cadena[j]);
            else{
                if(pila.empty() || pila.back( ) == '(' && cadena[j] != ')' || pila.back( ) == '[' && cadena[j] != ']')
                    break;
                pila.pop_back();
            }
        }

        if(pila.empty() && j==s )
            printf("Yes\n");
        else
            printf("No\n");
        pila.clear();
        i++;
    }
}

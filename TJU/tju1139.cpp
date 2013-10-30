#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int m[101][101];
    int e[101][101];
    vector<string> a;
    vector<string> b;
    vector<string> r;
    int x, y, i, j;
    string z;
    while(1){
        //Leemos el primer conjunto de palabras
        if (cin>>z)
            a.push_back(z);
        else
            break;
        while(1){
            cin>>z;
            if (z == "#")
                break;
            else
                a.push_back(z);
        }
        //Leemos el segundo conjunto de palabras
        while(1){
            cin>>z;
            if (z == "#")
                break;
            else
                b.push_back(z);
        }
        //Inicializamos la matriz
        for (i = 0 ; i <= 100 ; i++)
            e[i][0] = e[0][i] =m[i][0] = m[0][1] = 0;

        //Buscamos el tamaño de la secuencia comun mas larga
        x = a.size();
        y = b.size();
        for (i = 1 ; i <= x ; i++){
            for (j = 1 ; j <= y ; j++){
                if(a[i-1] == b[j-1]){
                    m[i][j] = m[i-1][j-1] + 1;
                    //r.push_back(a[i-1]);
                    e[i][j] = 1;
                }
                else{
                    m[i][j] = max(m[i][j-1],m[i-1][j]);
                    e[i][j] = 0;
                }
            }
        }
        //Buscando el resultado
        int l = m[x][y];
        for (i = x ; i >= 1 ; i--){
            for (j = y ; j >= 1 ; j--){
                if (e[i][j] == 1 && m[i][j]==l){
                    r.push_back(a[i-1]);
                    l--;
                    break;
                }
            }
        }

        //Imprimir resultado

            for (i = r.size()-1 ; i >=0 ; i--){
                cout<<r[i];
                if (i > 0)
                    cout<<" ";
            }
            cout<<endl;

        //Limpiar los contenedores
        a.clear();
        b.clear();
        r.clear();
    }
    return 0;
}

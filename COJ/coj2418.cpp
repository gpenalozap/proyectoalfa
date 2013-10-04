#include<string>
#include<iostream>

using namespace std;

int main(){
    string cadena;
    int n, x, y, con;
    char a, b, aux;

    cin>>cadena;
    cin>>n;
    while(n--){
        cin>>a;
        switch(a){
            case 'C':
                cin>>x>>y>>b;
                con = 0;
                x--;
                while(x<y){
                    if (cadena[x]==b)
                        con++;
                    x++;
                }
                cout<<con<<endl;
                break;
            case 'S':
                cin>>x>>y>>b;
                x--;
                cadena.replace(cadena.begin()+x,cadena.begin()+y, y-x , b);
                break;
            case 'R':
                cin>>x>>y;
                x--;
                y--;
                while (y > x){
                    aux = cadena[x];
                    cadena[x] = cadena[y];
                    cadena[y] = aux;
                    x++;
                    y--;
                }
        }
    }

    return 0;
}

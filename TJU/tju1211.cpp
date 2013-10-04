#include <string>
#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main(){
    string a, b, c;
    map<char, char> mapa;
    map<char, char>::iterator it;

    getline(cin,a);
    getline(cin,b);
    cout<<b<<endl;
    cout<<a<<endl;
    int l = a.size();

    for ( int i = 0 ; i < l ; i++){
        mapa[a[i]] = b[i];
    }

    //Secuencia de lineas
    while(getline(cin,c)){
        l = c.size();
        for (int i = 0 ; i < l ; i++){
            it = mapa.find(c[i]);
            if (it != mapa.end())
                putchar(it->second);
            else
                putchar(c[i]);
        }
        cout<<endl;
    }
    return 0;
}

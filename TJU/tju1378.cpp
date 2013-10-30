#include<map>
#include<string>
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    map<string, string> d;
    string a, b;
    char x[11], y[11], z[25];

    while(1){
        fgets(z,25,stdin);
        if(strlen(z)==1)
            break;
        sscanf(z,"%s %s", x, y);
        a = string(x);
        b = string(y);
        d[b] = a;
    }

    while(cin>>b){
        if (d[b] !="")
            cout<<d[b]<<endl;
        else
            cout<<"eh\n";
    }

    return 0;
}

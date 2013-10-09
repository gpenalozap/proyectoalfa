#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
    int f[10], s;
    string a;

    f[0] = 1;
    for (int i = 1 ; i <10 ; i++){
        f[i]=i*f[i-1];
    }

    while(1){
        cin>>a;
        if (a == "0")
            break;
        s = 0;
        for (int i = 0 ; i < a.size() ; i++)
            s+=((a[i]-48)*f[a.size()-i]);
        printf("%d\n",s);
    }
    return 0;
}

#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
    int s, n;
    string a;
    cin>>n;
    while(n--){
        cin>>a;
        if (a[0] == '-')
            s = 0;
        else
            s = a[0]-48;
        for (int i = 1 ; i < a.size() ; i++)
            s+=(a[i]-48);
        printf("%d\n",s);
    }
    return 0;
}

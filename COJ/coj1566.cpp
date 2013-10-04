#include <iostream>

using namespace std;

int n[501];
int s[501];

int main(){
    int i, x;
    n[0] = 0;
    for ( i = 1 ; i <= 500 ; i++){
        n[i] = i*i;
        s[i] = n[i] + s[i-1];
    }

    while(1){
        cin>>x;
        if (x==0)
            break;
        cout<<s[x]<<endl;
    }

    return 0;
}

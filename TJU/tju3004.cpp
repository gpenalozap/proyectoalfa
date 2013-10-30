#include<string>
#include<iostream>

using namespace std;

int main(){
    string a;
    int n, i, x;
    cin>>n;
    for ( i = 1 ; i <= n ; i++){
        cin>>x>>a;
        x--;
        cout<<i<<" ";
        for (int j = 0 ; j < a.size() ; j++)
            if (j != x)
                cout<<a[j];
        cout<<endl;
    }
    return 0;
}

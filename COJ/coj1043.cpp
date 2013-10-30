#include<bitset>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    int n, i;
    cin>>t;
    while(t--){
        cin>>n;
        bitset<16> f(n);
        vector<int> a;
        for(i = 0 ; i < f.size() ; i++)
            if(f[i] == 1)
                a.push_back(i);
        for(i = 0 ; i < a.size() ; i++)
            if (i < a.size()-1)
                cout<<a[i]<<" ";
            else
                cout<<a[i]<<endl;
    }
    return 0;
}

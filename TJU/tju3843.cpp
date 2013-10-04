#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, m, i, x;
    vector<int> a;
    vector<int> b;
    cin>>n>>m;
    for (i = 0; i < n ; i++){
        cin>>x;
        a.push_back(x);
    }
    for (i = 0; i < m ; i++){
        cin>>x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    x = 0;
    for (i = 0; i < n ; i++){
        if(binary_search(b.begin(), b.end(),a[i]))
           x++;
    }
    cout<<x<<endl;
    return 0;
}

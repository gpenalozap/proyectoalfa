#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, x;
    vector<int> l;
    cin>>n;
    while(n--){
        cin>>x;
        l.push_back(x);
    }
    sort(l.begin(), l.end());

    for (int i = 0; i < l.size() ; i++)
        cout<<l[i]<<endl;

    return 0;
}

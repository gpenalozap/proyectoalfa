#include<map>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    vector<char> l;
    map<char, int> s;
    map<char, int>::iterator it;
    string a;
    int n;
    cin>>n;
    while(n--){
        cin>>a;
        int m = -1;
        for( int i = 0 ; i < a.size() ; i++ ){
            s[a[i]]++;
            if (s[a[i]] > m)
                m = s[a[i]];
        }
        for( it = s.begin() ; it != s.end() ; it++ ){
            //cout<<it->first<<","<<it->second<<endl;
            if ( it->second == m)
                l.push_back(it->first);
        }
        sort(l.begin(), l.end());
        for (int i = 0 ; i < l.size() ; i++)
            cout<<l[i];
        cout<<endl;
        s.clear();
        l.clear();
    }
    return 0;
}

#include<string>
#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n, m, i, c;
    string key;
    map<string, int> ar;
    vector<int> r;
    map<string, int>::iterator it;
    while(1){
        cin>>n>>m;
        if ( (n+m) == 0)
            break;
        for ( i = 0 ; i < n ; i++){
            cin>>key;
            ar[key]++;
        }
        for (i = 1 ; i <= n ; i++){
            c = 0;
            for (it = ar.begin() ; it != ar.end() ; it++){
                if (it->second == i)
                    c++;
            }
            r.push_back(c);
        }
        for (i = 0 ; i < r.size() ; i++)
            cout<<r[i]<<endl;
        ar.clear();
        r.clear();
    }
    return 0;
}




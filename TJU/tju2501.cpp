#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    string c;
    vector<int> g;
    int n, r, t;
    cin>>n;
    while (n--){
        cin>>c;
        if (c[0]=='O')
            r = 1;
        else
            r = 0;
        g.push_back(r);
        for (int i = 1 ; i <c.size(); i++){
            if (c[i]=='O'){
                if (c[i-1]=='O'){
                    r++;
                }
                else{
                    r = 1;
                }
            }
            else{
                    r = 0;
            }
            g.push_back(r);
        }
        t = 0;
        for (int i = 0 ; i < g.size() ; i++ ){
            t+=g[i];
        }
        cout<<t<<endl;
        g.clear();
    }
    return 0;
}

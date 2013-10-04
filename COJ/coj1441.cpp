#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    long long a, b, c, sc, h;
    vector<long long> l;
    while(1){
        cin>>a>>b>>c;
        if ((a+b+c)==0)
            break;
        l.push_back(a);
        l.push_back(b);
        l.push_back(c);
        sort(l.begin(), l.end());

        sc = sqrt(pow(l[1],2)+pow(l[0],2));

        if (l[2] == sc)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}




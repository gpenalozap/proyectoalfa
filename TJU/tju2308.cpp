#include<iostream>
#include<vector>

using namespace std;

vector<int> p(1,2);
int v[432][100];

bool primo(int n){
    for(int i = 0 ; i < p.size() ; i++){
        if (n%p[i] == 0)
            return false;
    }
    return true;
}

int divisores(int n, int d){
    int s = 0;
    do{
        s+=(n/=d);
    }while(n > 0);
    return s;
}

int main(){
    for (int i = 3 ; i < 432 ; i++)
        if(primo(i))
            p.push_back(i);
    for (int i = 2 ; i <432 ; i++){
        for(int j = 0 ; j < p.size() && p[j] <= i ; j++)
            v[i][j] = divisores(i,p[j]);
    }


    long long div;
    int n, k;
    while(cin>>n>>k){
        vector<int> u(p.size(),0);
        div = 1;
        for(int i = 0 ; i < p.size() ; i++){
            u[i] = v[n][i]-v[k][i]-v[n-k][i];
            div*=(u[i]+1);
        }

        cout<<div<<endl;
    }

}

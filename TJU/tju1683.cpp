#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
    string a, b;
    int M[300][300];
    while(cin>>a>>b){
        for (int i = 0 ; i <300 ; i++){
            M[i][0] = 0;
            M[0][i] = 0;
        }
        int x = a.size();
        int y = b.size();

        for(int i = 1; i <= x ; i++){
            for(int j = 1 ; j <= y ; j++){
                if(a[i-1] == b[j-1])
                    M[i][j] = M[i-1][j-1] + 1;
                else
                    M[i][j] = max(M[i][j-1],M[i-1][j]);
            }
        }
        cout<<M[x][y]<<endl;
    }

    return 0;
}

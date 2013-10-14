#include<iostream>

using namespace std;

int main(){
    int i, n;
    long long int q, s;
    while(1){
        cin>>n;
        if (n == 0)
            break;

        /*q = n % 2006;
        for ( i = 2 ; i <= n ; i++){
            q = (q * n) % 2006;
        }*/
        if (n&1){
            int m = n>>1;
            s = n*n;
            q = s % 2006;
            for ( i = 2 ; i <= m ; i++){
                q = (q * s) % 2006;
            }
            q = (q * n) % 2006;
        }
        else{
            int m = n>>1;
            s = n*n;
            q = s % 2006;
            for ( i = 2 ; i <= m ; i++){
                q = (q * s) % 2006;
            }
        }
        cout<<q<<endl;
    }
    return 0;
}

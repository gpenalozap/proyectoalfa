#include<iostream>
#include<string>
#include<bitset>

using namespace std;

int main(){
    int n, i, k, j;
    cin>>n;
    for (k = 1 ; k <= n ; k++){
        bitset<80> a;
        bitset<80> b;
        bitset<81> suma;
        bitset<81> carry;
        cin>>a;
        cin>>b;
        carry[0] = 0;
        for (i = 0; i < 80 ; i++){
            if (a[i]==0 && b[i]==0 && carry[i]==0){
                suma[i]=0;
                carry[i+1]=0;
            }
            else if (a[i]==0 && b[i]==0 && carry[i]==1){
                suma[i]=1;
                carry[i+1]=0;
            }
            else if (a[i]==0 && b[i]==1 && carry[i]==0){
                suma[i]=1;
                carry[i+1]=0;
            }
            else if (a[i]==0 && b[i]==1 && carry[i]==1){
                suma[i]=0;
                carry[i+1]=1;
            }
            else if (a[i]==1 && b[i]==0 && carry[i]==0){
                suma[i]=1;
                carry[i+1]=0;
            }
            else if (a[i]==1 && b[i]==0 && carry[i]==1){
                suma[i]=0;
                carry[i+1]=1;
            }
            else if (a[i]==1 && b[i]==1 && carry[i]==0){
                suma[i]=0;
                carry[i+1]=1;
            }
            else if (a[i]==1 && b[i]==1 && carry[i]==1){
                suma[i]=1;
                carry[i+1]=1;
            }
        }
        cout<<k<<" ";
        suma[80]=carry[80];
            j=80;
            while(suma[j]!=1 && j>0){
                j--;
            }
            while(j>=0){
                cout<<suma[j];
                j--;
            }
            cout<<endl;
    }
    return 0;
}

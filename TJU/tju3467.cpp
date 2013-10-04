#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    int s, i;
    cin>>i;
    while (i>0){
        cin>>n;
        s = 0;
        while(n > 0){
            s = s + n%10;
            n = n/10;
        }
        cout<<s<<endl;
        i--;
    }
    return 0;
}

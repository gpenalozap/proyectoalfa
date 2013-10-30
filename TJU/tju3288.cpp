#include <bitset>
#include <iostream>

using namespace std;

int main(){
    int k, th;

    cin>>k;
    while(k--){
        cin>>th;
        bitset<32> bits(th);
        if (bits.count() & 1)
            cout<<2*th+1<<endl;
        else
            cout<<2*th<<endl;
    }
    return 0;
}

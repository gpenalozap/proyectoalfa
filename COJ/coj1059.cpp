#include<iostream>
#include<deque>

using namespace std;

int main(){
    int n;
    deque<int> bit;
    cin>>n;
    while(n!=0){
        int s = 0;
        while(n>0){
            if (n&1){
                s++;
                bit.push_front(1);
            }
            else
                bit.push_front(0);
            n = n>>1;
        }
        cout<<"The parity of ";
        int flag = 0;
        for (deque<int>::iterator it = bit.begin(); it != bit.end(); ++it){
            if (*it != 0)
                flag++;
            if (flag)
                cout<<*it;
        }
        cout<<" is "<<s<<" (mod 2)."<<endl;
        bit.clear();
        cin>>n;
    }
    return 0;
}

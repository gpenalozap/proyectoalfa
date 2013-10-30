#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int f[10];
    int i;
    f[0] = 1;
    f[1] = 1;
    for (i = 2 ; i < 10 ; i++)
        f[i] = i *f[i-1];

    double e = 2.5;

    cout<<"n e\n";
    cout<<"- -----------\n";
    cout<<0<<" "<<1<<endl;
    cout<<1<<" "<<2<<endl;
    cout<<2<<" "<<2.5<<endl;

    for (i = 3 ; i <10 ; i++ ){
        e = e + 1*(1.0/f[i]);
        cout<<i<<" "<<fixed<<setprecision(9)<<e<<endl;
    }

    return 0;
}

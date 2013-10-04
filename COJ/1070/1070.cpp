#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    int c, r;
    while ( cin >> n){
        c = (n*(n+1)*(2*n+1))/6;
        r = pow((n*(n+1))/2,2);
        cout<< c <<" "<< r << endl;
    }
    return 0;
}

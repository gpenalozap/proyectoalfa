#include<iostream>
#include<cstdio>

int main(){
    int a, b, t;
    std::cin>>t;
    while(t--){
        std::cin>>a>>b;
        printf("%.8f\n",(3.0*a*b)/16.0);
    }
    return 0;
}

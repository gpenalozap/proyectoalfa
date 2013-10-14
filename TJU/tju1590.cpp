#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){
    int n, i;
    string alfa;
    cin>>n;
    for ( i = 1 ; i <= n ; i++){
        cin>>alfa;
        cout<<"String #"<<i<<endl;
        for (int j = 0 ; j < alfa.size() ; j++){
            if (alfa[j]=='Z')
                printf("A");
            else
                printf("%c", alfa[j]+1);
        }
        cout<<endl<<endl;
    }
    return 0;
}

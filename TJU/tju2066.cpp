#include <string>
#include <iostream>

using namespace std;

int main(){
    string x,y;
    int n;
    cin>>n;
    for (int i = 0 ; i < n ; i++){
        cin>>x;
        cin>>y;

        if (x.size() < y.size())
            cout<<"NO BRAINS"<<endl;
        else if(x.size() > y.size())
            cout<<"MMM BRAINS"<<endl;
        else{
            if (x==y)
                cout<<"MMM BRAINS"<<endl;
            else if(x < y)
                cout<<"NO BRAINS"<<endl;
            else
                cout<<"MMM BRAINS"<<endl;
        }
    }
    return 0;
}

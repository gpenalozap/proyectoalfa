#include<vector>
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int c, n, x, s, sup;
    float average;
    vector<int> frosh;
    cin>>c;
    while(c--){
        cin>>n;
        s = 0;
        while(n--){
            cin>>x;
            s+=x;
            frosh.push_back(x);
        }
        average = (float)s/frosh.size();
        sup = 0;
        for (int i = 0 ; i < frosh.size() ; i++ )
            if(frosh[i]>average)
                sup++;

        printf("%.3f", (sup*100.0)/frosh.size());
        cout<<"%"<<endl;
        frosh.clear();
    }
    return 0;
}

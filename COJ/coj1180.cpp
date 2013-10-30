#include <iostream>

using namespace std;

int main(){
    int good[]={1,1,2,2,2,8};
    int ent[6];
    int n, i, j;

    cin >> n;

    for (i = 0 ; i < n ; i++){
        for (j = 0 ; j < 5 ; j++){
            cin >> ent[j];
            cout << good[j] - ent[j] <<" ";
        }
        cin >> ent[j];
        cout << good[j] - ent[j] << endl;
    }
    return 0;
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string a, b;
    int i, j;
    while (cin >> a >> b){
        j = 0;
        i = 0;
        while (i < a.size()){
            while (j < b.size() && a[i] != b[j])
                j++;

            if (a[i] != b[j])
                break;

            j++;
            i++;
        }
        if (i < a.size())
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}

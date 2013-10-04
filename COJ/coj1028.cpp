#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string a,b;

    while(cin>>a>>b){
        b += " ";
        int j = 0;
        int i = 0;
        for( i = 0; i < a.size(); i++ ) {
            while( j < b.size() && b[j] != a[i] )
                j++;
            if( b[j] != a[i] )
                break;
            j++;
        }
        if( i < a.size() )
          cout << "No" << endl;
        else
          cout << "Yes" << endl;
      }
    return 0;
  }

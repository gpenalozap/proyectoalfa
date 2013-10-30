#include<algorithm>
#include<vector>
#include<stdio.h>

using namespace std;

int main(){
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    vector<int> m;
    vector<int> b;

    for (int i = 0 ; i < n ; i++){
        int p, q;
        scanf("%d %d", &p, &q);
        m.push_back(p);
        b.push_back(q);
    }

    sort(m.begin(), m.end());
    sort(b.begin(), b.end());

    int s = 0;

    for (int i = 0 ; i < n ; i++){
        if (m[i] > b[i])
            s = s + (m[i]-b[i]) * y;
        else
            s = s + (b[i]-m[i]) * x;
    }

    printf("%d\n", s);

    return 0;
}

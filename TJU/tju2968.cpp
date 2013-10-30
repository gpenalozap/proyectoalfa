#include<set>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
	int n, x;
	set<int> d;
	set<int>::iterator it;
	while (scanf("%d %d", &n, &x) ==2 ){
		d.insert(x);
		int up = x;
		while (1){
			up = up + n + 1;
			if (up <= n*n)
				d.insert(up);
			else
				break;
		}
		
		while (1){
			up = up - n - 1;
			if (up > 0)
				d.insert(up);
			else
				break;
		}
		
		for (it = d.begin() ; it != d.end(); it++)
			printf("%d ", *it);
		printf("\n");
		d.clear();
	}
	return 0;
}

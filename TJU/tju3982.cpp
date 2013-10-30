#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int casos;
	int m, n;
	cin>>casos;
	while(casos--){
		cin>>m>>n;
		vector<int> v(n);
		for (int i = 0 ; i < n ; i++)
			cin>>v[i];
		sort(v.begin(), v.end());
		int dias = m;
		int j = 0;
		while(1){
			if (v[j] <= dias){
				dias-=v[j];
				j++;
			}
			else
				break;
			if (j == n)
				break;
		}
		cout<<j<<endl;
	}
	return 0;
}

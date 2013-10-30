#include<iostream>
#include<vector>

#define MAX 210

using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	int m[MAX][MAX];
	vector<int> l1(a), l2(b);
	for (int i = 0 ; i < a ; i++)
		cin>>l1[i];
	for (int i = 0 ; i < b ; i++)
		cin>>l2[i];
	for (int i = 0 ; i < MAX ; i++)
		m[i][0] = m[0][i] = 0;
		
	int mx = -10000;
	for ( int i = 1 ; i <= a ; i++){
		for ( int j = 1 ; j <=b ; j++){
			if (l1[i-1] == l2[j-1])
			{
				m[i][j] = m[i-1][j-1] + 1;
				if (m[i][j] > mx)
					mx = m[i][j];
			}
			else
				m[i][j] = 0;
		}
	}		
	cout<<mx<<endl;
	return 0;
}

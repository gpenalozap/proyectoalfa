#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int s, x, m;
		cin>>x;
		s = (x*x)-x+1;
		m = s + (x-1)*2;
		cout<<s<<" "<<m<<endl;
	}
	return 0;
}

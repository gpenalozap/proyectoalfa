#include <iostream>

using namespace std;

int unico(int x, int y, int z){
	if (x == y)
		return z;
	if (x == z)
		return y;
	return x;
}

int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	cout<<unico(a,c,e)<<" "<<unico(d,b,f)<<endl;
	return 0;
}

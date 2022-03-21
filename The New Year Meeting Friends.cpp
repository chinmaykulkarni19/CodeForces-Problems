#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	int t=abs(x-y)+abs(x-z);
	int u=abs(y-x)+abs(y-z);
	int v=abs(z-x)+abs(z-y);
	int w=min(min(t,u),v);
	cout<<w<<endl;
	return 0;
}

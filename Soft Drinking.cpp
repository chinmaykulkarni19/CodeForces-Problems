#include <iostream>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int t=k*l;
	int u=t/nl;
	int v=c*d;
	int w=p/np;
	int x=(min(min(u,v),w))/n;
	cout<<x<<endl;
	return 0;
}

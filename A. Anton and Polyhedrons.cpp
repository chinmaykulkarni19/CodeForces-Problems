#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long sum=0;
	string s;
	while(n--)
	{   cin>>s;
	    if(s=="Tetrahedron")
	    sum+=4;
	    if(s=="Cube")
	    sum+=6;
	    if(s=="Octahedron")
	    sum+=8;
	    if(s=="Dodecahedron")
	    sum+=12;
	    if(s=="Icosahedron")
	    sum+=20;
	    
	}
	cout<<sum<<endl;
	return 0;
}

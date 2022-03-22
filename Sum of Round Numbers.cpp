#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[6];
	    int t=0,m=1;
	    for(int i=1;i<6;i++)
	    {
	        arr[i]=n%10;
	        n=n/10;
	        if(arr[i]!=0)
	        {
	            t++;
	        }
	    }
	    cout<<t<<"\n";
	    for(int i=1;i<6;i++)
	    {
	        if(arr[i]!=0)
	        {
	            cout<<arr[i]*m<<" ";
	        }
	        m=m*10;
	    }
	    cout<<"\n";
	    
	    
	    
	}
	return 0;
}

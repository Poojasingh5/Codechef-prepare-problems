#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int n,a[104];
	    int sum=0;
	   int mini=10000;
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	        sum=sum+a[j];
	        mini=min(mini,a[j]);
	    }
	    int k;
	    k=sum-(n*mini);
	    cout<<k<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{ int count=0;
	    int n;
	    long int a[105];
	    int k;
	    cin>>n>>k;
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	        a[j]=a[j]+k;
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(a[j]%7==0)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

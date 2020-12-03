#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int n;
	    long long int c,sum=0;
	    int a[10000];
	    int j;
	    cin>>n;
	    cin>>c;
	    for(j=0;j<n;j++)
	    {
	        cin>>a[j];
	        sum=sum+a[j];
	    }
	    if(sum>c)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;

	}
	return 0;
}

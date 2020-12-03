#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    long int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    long long int k, m=0;
	    for( k=0;s[k]!='\0';k++)
	    {
	        if(s[k]=='1')
	        m++;
	    }
	    long long int ans;
	    ans=(m)*(m+1);
	    cout<<ans/2<<endl;
	}
	return 0;
}

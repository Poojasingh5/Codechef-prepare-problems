#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,m;
		ll count=0;
		cin>>a>>b>>m;
	count=max(b-a,max(a-b,a+b-(m*(m+1))));
		cout<<count<<endl;
	}
	return 0;
}

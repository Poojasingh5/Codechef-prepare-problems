#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int b,ans=0;
		cin>>b;
		ans=(b/2)*((b/2)-1);
		cout<<ans/2<<endl;

	}
	return 0;
}

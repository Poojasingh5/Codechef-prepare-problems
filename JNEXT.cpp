#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long int a[n];
		for(long int i=0;i<n;i++)
		{
			cin>>a[i];

		}
		long int i=0;

		 if( std::next_permutation(a,a+n) ==0)
		 cout<<-1;
		 else
		 {

		for(i=0;i<n;i++)
		cout<<a[i];
			}
		cout<<endl;
	}
	return 0;
} 

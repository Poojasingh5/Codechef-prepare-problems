#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>n>>k;
		k=min(k,n-k);

		long long int summ=0;
		long long int a[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];

		}
		sort(a,a+n);
		for(int i=0;i<k;i++)
		{
			summ=summ+a[i];
		}
		for(int i=k;i<n;i++)
		{
			sum=sum+a[i];
		}

		cout<<sum-summ<<endl;
	}
	return 0;
}

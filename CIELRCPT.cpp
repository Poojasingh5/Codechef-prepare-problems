#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int count=0;
		long long int k;
		for(int i=11;i>=0;i--)
		{
			k=pow(2,i);
			if(n-k>=0)
			{
				count++;
				i++;
				n=n-k;
			}

		}
		cout<<count<<endl;
	}
	return 0;
}

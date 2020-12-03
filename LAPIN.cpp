
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[125]={0},b[125]={0};
		int n=s.length();
		int flag=0;
		for(int i=0;i<n/2;i++)
		{
			a[s[i]]++;

		}
			for(int i=((n+1)/2);i<n;i++)
		{
			b[s[i]]++;

		}

		for(int i=0;i<125;i++)
		{
			if(a[i]!=b[i])
			flag++;
		}
		if(flag==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}

#include <iostream>
#include<algorithm>
using namespace std;
typedef long long int l;


int main() {
	// your code goes here
	l n;
	l d;
	cin>>n>>d;
	l i=0;
	l a[n];
	for(l i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	l count=0;
	for(i=0;i<n-1;)
	{
		if((a[i+1]-a[i])<=d)
	{	count++;
	i=i+2;
	}
	else
	i++;
	}
	cout<<count<<endl;
	return 0;
}

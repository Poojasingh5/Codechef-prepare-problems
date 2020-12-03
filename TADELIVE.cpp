#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

	int n,x,y;
	cin>>n>>x>>y;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	vector<pair<int ,int> >v;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		v.push_back(make_pair(abs(b[i]-a[i]),i));
	}
	sort(v.rbegin(),v.rend());
	for(int i=0;i<n;i++)
	{
		int p;
		p=v[i].second;
		if(a[p]>=b[p])
		{
			if(x>0)
			{
				ans=ans+a[p];
				x--;

			}
			else if((x==0)&&(y>0))
			{
				ans=ans+b[p];
				y--;

			}
		}
		else if((b[p]>=a[p]))
		{
			if(y>0)
			{
				ans=ans+b[p];
				y--;


			}
			else if((y==0)&&(x>0))
			{
				ans=ans+a[p];
				x--;

			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

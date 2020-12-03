#include <iostream>
using namespace std;

int main()
{ std::ios::sync_with_stdio(false);
    // your code goes here
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int flag=0,x,y,k;
	     int n,j;
	    cin>>x>>y>>k>>n;
	    struct word
	    {
	        int pages;
	        int cost;
	    }a[100000];
	    for(j=0;j<n;j++)
	    {
	        cin>>a[j].pages;
	        cin>>a[j].cost;
	    }
	    int require;
	    require=x-y;
	    for(j=0;j<n;j++)
	    {
	        if((require<=a[j].pages)&&(k>=a[j].cost))
	        flag=1;

	    }
	    if(flag==1)
	    cout<<"LuckyChef"<<" ";
	    if(flag==0)
	    cout<<"UnluckyChef"<<" ";
	}
	return 0;
}

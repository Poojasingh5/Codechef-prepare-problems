#include <iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<stack>
#define pb push_back
#define pp pop

using namespace std;
typedef long long int ll;
int main()
{
	//Write code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
   t=1;
	while(t--)
	{

	    stack<ll>n;
	    string s;
	    cin>>s;
	    s=s+')';

	   // cout<<s;
	    ll sum=0;
	    n.push(-1);
	    for(ll i=0;i<=s.length();i++)
	    {
	       if(s[i]=='C')
	       {
	           n.push(12);

	       }
	       else if(s[i]=='H')
	       {
	           n.push(1);

	       }
	       else if(s[i]=='O')
	       {
	           n.push(16);

	       }
	       else if(s[i]>=50 && s[i]<=58)
	       {
	           n.top()=n.top()*(s[i]-48);
	               //cout<<n.top()<<" ";
	       }
	      else if(s[i]==')')
	       {
	           while(n.top()!=-1)
	           {
	               sum=sum+n.top();
	              //cout<<n.top()<<" ";
	               n.pop();
	           }
	           n.pop();
	               n.push(sum);
	           sum=0;
	       }
	       else if(s[i]=='(')
	       n.push(-1);
	    }
	    ll ans=0;
    while(!n.empty())
    {
      ans=ans+n.top();
        n.pop();
    }
    cout<<ans<<endl;
    }
return 0;
} 

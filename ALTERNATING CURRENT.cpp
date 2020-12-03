#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	stack<char>c;
    string s;
     cin>>s;
  long long int n=s.length(),i;
  for(i=0;i<n;i++)
  {
      if(c.empty())
      c.push(s[i]);
      else
      {
          if(c.top()=='+')
          {
              if(s[i]=='+')
              c.pop();
              else
              c.push(s[i]);
          }
          else
          {
              if(s[i]=='-')
              c.pop();
              else
              c.push(s[i]);
          }
      }
  }
  if(c.empty())
  cout<<"Yes"<<endl;
  else
  cout<<"NO"<<endl;
	return 0;
}

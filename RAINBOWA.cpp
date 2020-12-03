#include <iostream>
using namespace std;
int plndrm(int a[],int n)
{int j,k;
int flag;
    for(j=0,k=n-1;j<n;j++,k--)
    {
        if(a[j]==a[k])
        {
         flag=1;
        }
        else
       { flag=0;
       break;
       }
    }
        return flag;
}
int main() {
	// your code goes here
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int a[105];
	    int j;
	   int b[8]={1,0,0,0,0,0,0,0};
	   int fflag=0;
      for(int j=0;j<n;j++)
    {
        cin>>a[j];

      b[a[j]]++;
    }

    for(int j=0;j<n;j++)
    {
        if(b[j]>0)
        fflag=1;
       else
      {
        fflag=0;
        break;
      }
    }

	 int ans;
	 ans=plndrm(a,n);

	if((ans==1)&&(fflag==1))
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
	return 0;
}

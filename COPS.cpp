#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{int k;
	    int m;
	    int x,y,j;
	    long int a[105];
	    long int b[100]={ };
	    cin>>m;
	    cin>>x>>y;
	    int pro;
	    pro=x*y;
	    for(j=0;j<m;j++)
	    {
	        cin>>a[j];
	    }
	    for(j=0;j<m;j++)
	    {

	        	for(k=a[j]-pro-1;k<=a[j]+pro-1;k++)
			    {
			    	 if(k>=0 && k<=100)
			    	 {
			    	 	b[k]=1;
			    	 }
			    	 else
			    	 {
			    	 	continue;
			    	 }

			    }

	    }
	    int count=0;
	    for(int p=0;p<100;p++)
	    {
	        if(b[p]==1)
	        count++;
	    }
	    cout<<(100-count)<<endl;
	}
	return 0;
}

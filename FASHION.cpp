#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int f=0;
		int i,j,k, t,n,a[1000],b[1000];
	int sum=0;
	cin>>t;

	for(k=0;k<t;k++)
	{ int sum=0;
	cin>>n;
	 for(i=0;i<n;i++)
	 {
		cin>>a[i];
	 }
	 for(j=0;j<n;j++)
	 {
	 	cin>>b[j];
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1-i;j++)
	 	{
	 		if(a[j]>a[j+1])
	 		{
	 			int temp=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=temp;	 		}
	 			else
	 			f=1;
	 	}
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1-i;j++)
	 	{
	 		if(b[j]>b[j+1])
	 		{
	 			int temp=b[j];
	 			b[j]=b[j+1];
	 			b[j+1]=temp;	 		}
	 			else
	 			f=1;
	 	}
	 }
	 for(i=0;i<n;i++)
	 {
	 	sum=sum+a[i]*b[i];

	 }
	 cout<<sum<<endl;;

}
return 0;
} 

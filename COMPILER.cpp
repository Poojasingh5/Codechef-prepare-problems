#include <string>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t=0;
	int sum=0;
	int ans,b;
	cin >> t;
	while(t--){
		b=0;
		string s;
		cin >> s;
	 int len = s.size();
		ans=0;
		sum+=s.size();
		for(int i=0;i<len;i++){
		if(s.substr(i,1)==">")
			ans--;
		else
			ans++;
		if(ans==0)
			b=i+1;
		else if(ans<0)
			break;
		}
		cout << b << endl;
	}
return 0;
}

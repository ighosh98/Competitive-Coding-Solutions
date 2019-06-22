#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long sum =-48*s.length();
		int i=0;
		while(s[i]!='\0')
		{
			sum+=s[i];
			++i;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
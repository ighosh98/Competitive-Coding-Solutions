#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q,n;
	cin >> q;
	while(q--)
	{
		cin >> n;
		string s;
		cin >> s;
		if(n==2 && s[0]>=s[1])
			printf("NO\n");
		else
		{
			printf("YES\n");
			cout << "2\n"<< s[0]  << " " << s.substr(1) << endl;
		}

	}

}
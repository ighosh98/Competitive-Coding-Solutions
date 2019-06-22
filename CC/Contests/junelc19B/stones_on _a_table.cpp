#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
	FAST_IO;
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count = 0;
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			count++;
		}
	}
	cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;
inline int longest( string x,string y)
{
	int long_string[x.length()+1][y.length()+1];
	int longest = 0;
	for(int i  =0; i <=x.length() ;i ++)
		{
			for(int j=0;j<= y.length();j++)
			{
				if ( i==0 || j==0)
				{
					long_string[i][j] = 0;
				}
				else if (x[i-1] == y[j-1])
				{
					long_string[i][j]= long_string[i-1][j-1]+1;
					longest = max(longest, long_string[i][j]);					
				}
				else
				 long_string[i][j] =0;
			}
		}
		return longest;
}
int main()
{
	stack <int> t;
	t.push(12);
	t.pop();

	int n;
	string x;
	string y ="chef";
	cin >> n;
	int count = 0;
	while (n--)
	{
		cin >> x;
		if (longest(x,y) >=2)
			count ++;
	}
	cout << count;
}

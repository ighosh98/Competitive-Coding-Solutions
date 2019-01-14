#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);	
	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string inp;
		string x,y;
		int mpx = 0,mpy = 0;
	
		
			for(int i = 0;i<n;i++)
		{
			cin >> inp;
			if(i==0)
			{
				x = inp;
				mpx++;
			}
			else{
			if(inp==x)
			{
				mpx++;
			}
			else
			{
				y = inp;
				mpy+=1;
			}
	
			}

					}
	
		if(mpx>mpy)
		{
			cout << x<<endl;
		}
		 if(mpx<mpy)
		{
			cout<< y<<endl;
		}
		if(mpx==mpy)
			cout << "Draw\n";
	}
	return 0;
}
//Try implementing using maps
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t ;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		string sol;
		string checker;
		int wrong = 0;
		int correct = 0;
		int f1=0,f2=0,f3;

		for(int i = 0;i<n;i++)
		{

		cin >> checker;
		cin >> sol;
		for(int j = 0;j <m;j++)
		{
			if(sol[j] == '0')
			{
				wrong++;
			}

		}
		if(checker=="correct" && wrong != 0)
		{
			f1++;
			break;
		}
		if(checker =="wrong" && wrong == 0)
		{
			f2++;
			break;
		}
		}
		if(f1!=0)
		{
			cout << "INVALID\n";
		}
		else if(f2!=0)
		{
			cout << "WEAK\n";
		}
		else
		{
			cout << "FINE\n";
		}
	}
}
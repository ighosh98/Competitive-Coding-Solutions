#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i;i<t;i++)
	{
		string s;
		getline(cin,s);
		int counta=0,countb=0;
		int acount=0,bcount=0;
		int in=0, fin=0;
		int j=0
		{
			if(s[j]=='A')
			{
				in=1;
				acount++;
			}
			if(s[j]=='B')
			{
				in=2;
				bcount++;
			}
			if(s[j]!='.')
				{
					for(int k=(j+1);k<s.length();k++)
					{
						if(s[j]=='A' && s[k]=='A')
						{
							counta+=(k-j-1);
							acount++;
						}
						if(s[j]=='A' && s[k]!='A')
						{
							
							acount++;
						}
						if(s[j]=='B' && s[k]=='B')
						{
							countb+=(k-j-1);
							bcount++;
						}
						if(s[j]=='B' && s[k]!='B')
						{
							bcount++;
						}

					}
					
				}

		}
		counta+=acount;
		countb+=bcount;
			cout << counta <<' '<<countb;
	}
}
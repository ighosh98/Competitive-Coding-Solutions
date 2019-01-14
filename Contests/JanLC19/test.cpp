#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	t++;
	for(int i=0;i<t;i++)
	{
		string x;
		getline(cin, x);
		if(i>0)
		{
			bool  fancy = ((x.find(" not ") < x.length())||(x.find("not ") == 0) || (x.find(" not") == x.length()-4) || (x.find("not")==0 || x.length() == 3));
			//cout << x.find("not") << " " << x.length() << " "<< fancy << endl;
			if(fancy)
			{
				printf("Real Fancy\n");
			}
			else
			{
			printf("regularly fancy\n");				
			}
		}
	}
}
// Real Fancy or regular fancy
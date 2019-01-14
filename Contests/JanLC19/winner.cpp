#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	ios::sync_with_stdio(false);
	cin.tie(0);	
	int a,b,t;
	cin >> t;
	while(t--)
	{
		cin >> n >> a >> b;
		int arr[n];
		int lcm = 0,x = 0,y =0 ;
		//b plays first
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			if(arr[i]%a==0 && arr[i]%b==0)
				lcm++;
			if(arr[i]%a==0)
				x++;
			if(arr[i]%b==0)
				y++;
			
		}
//A IS FOR BOB 
		int a1,b1;
		a1 = x - lcm;
		b1 = y - lcm;
	//	cout << a1 << " b1 = "<< b1 << " lcm="<<lcm << endl;
		if(lcm == 0)
		{
			if(a1<=b1)
				printf("ALICE\n");
			else
			{
				printf("BOB\n");
			}
			
		}
		else if(lcm != 0)
		{
				
			if(a1>=b1)
				printf("BOB\n");
			else
				printf("ALICE\n");
		

		}

	} 
}



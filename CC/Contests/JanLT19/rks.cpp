#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,t,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		if(k==0)
		{
			cout << endl << n << " ";
			for(int i=0;i<n;i++ )
			{
				cout << (i+1) << " " << i+1 << " ";
			}
			cout << "\n";
		}
		else{
			int chess[n+1][n+1];
			
			int row[k], col[k];
			for(int i = 0;i<k;i++)
			{
				cin >> row[i] >> col[i];
				chess[row[i]][col[i]] =1;
			}
			int disrow = n,discol = n;
			sort(row,row+k);
			sort(col,col+k);//sorted arrays
			int row1[n+1] = {0},col1[n+1] = {0};
			int x;
			for(int i=0;i<k;i++)
			{
				
				row1[row[i]] = 1;
				disrow--;
			
				while(row[i]==row[i+1] && (i+1)<=k)
				{
					i++;
					disrow-- ;
				}

			}
			for(int i=0;i<k;i++)
			{
				col1[col[i]] = 1;
				discol--;
			
				while(col[i]==col[i+1] &&  (i+1)<=k)
				{
					discol--;
					i++;
				}	

			}
		
			cout << max(disrow,discol) <<" ";
			int counter = 0;
			int r =1,c = 1;
			while(counter<max(disrow,discol))
			{
				while(row1[r]==1)
					r++;
				while(col1[c]==1)
				{
					c++;
				}
				cout << r <<  " " << c << " ";
				counter++;
				r++;
				c++;
			}
		}
	}

}
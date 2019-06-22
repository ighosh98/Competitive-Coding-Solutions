#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(false)
#define make_pair make_pair
#define eb   emplace_back
#define ef   emplace_front
#define pb   push_back
#define pf   push_front
#define popb pop_back
#define popf pop_front

//debuggers
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long ll;
using namespace std;
int main()
{
	int t,n,k;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		cin >> k;
		int x;
		cin >> x;
		int modified[n];
		for(int i = 0 ;i<n;i++)
		{
			modified[i] = (a[i])^x;
	//		cout << a[i] << " = "<<modified[i] << endl;
		}
		//map<int,int>
		int diff[n],count = 0;
		for(int i=0;i<n;i++)
		{
			diff[i] = modified[i]-a[i];
	//		cout << a[i] << " " << diff[i] << endl;
			if(diff[i]>0)
				count++;
		}
//		cout << " count =  "<< count << endl;
		int sum = 0;
		sort(diff,diff+n);
		for(int i  = 0 ; i<n;i++)
			sum +=a[i];
		int tracker = 0;
		int j;
		int i;
	//			cout << " sum = " << sum << endl;
		int y;

		for(i=n-1;diff[i]>0;i--)
		{
			sum +=diff[i];
			tracker++;
		}
		y = tracker;
			while(tracker%k!=0)
			{
				i++;
				sum-=diff[i];
				tracker--;
			}
			y-=tracker;
	//	cout << "Sum tiint now = " << sum << "next val = " << diff[i] << endl;
		j=i;
		//cout << k-(tracker%k) << " ";
		cout << y << endl;
		if(n-tracker-(y/2)>=k)
			{
				if(y%2==0 && y!=0)
					while(diff[i]>0)
					{
						sum+=diff[i];
						tracker++;
						i--;
					}
				else
				{
					while(diff[i]>0)
					{
						sum+=diff[i];
						tracker++;
						i--;
					}
					sum+=diff[i];

				}
			}
		else if(n-tracker>=k)
		{
			int pre = 0;
			int kp = 0;
			while(i>=0 && kp<k)
			{
				pre+=diff[i];
				tracker++;
				i--;
				kp++;
			
			}
			if(pre>0)
				sum+=pre;
		}
		

		cout << sum << endl;
//output: maxm money chef can have
	} 
}

#include <iostream>
#include <bits/stdc++.h>
#include <sstream> 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define CPrll(c)  for(auto i:(c)) { cout<<i<<" "; } nl 
#define eb   emplace_back
#define ef   emplace_front
#define pb   push_back
#define pf   push_front
#define popb pop_back
#define popf pop_front
#define mp   make_pair
#define trace2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define trace3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define trace4(w,x,y,z) cout<<#w<<"="<<w<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
typedef long long ll;
using namespace std;
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//Upsolved by Reading Editorial( Can't find a good explanation to the last case's answer)
int main()
{
	ll t,n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		ll index=0;
		ll sum=0;
		while(arr[index]<=k)
		{
			sum+=arr[index];
			index++;
	//		cout << sum;
		}
		//cout << index;
		//index--;
			for(ll i=index;i<n;i++)
			{
				arr[i]-=k;
				sum+=k;
			}
		//	printf("%lld",sum);
			int temp = 0;
			for(int i=index;i<n-2;i++)
			{
				temp+=arr[i];
			}
		//	cout << temp;
			if(index == n)
			{
				cout <<sum<<endl;
			}
			else if(index == n-1)
			{
				printf("%lld\n",sum+arr[n-1]);

			}
			else if(temp<=arr[n-2])
			{
				printf("%lld\n",sum+arr[n-1]-(arr[n-2]-temp));
			}
			else
			{
				printf("%lld\n",sum+arr[n-1]-(arr[n-2]+temp)%2);

			}
		
	//	printf("%lld\n",sum);
	}
}


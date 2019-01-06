#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//Create  hash an unordered set
 
int main()
{
	ll t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		unordered_set <ll> x;
	
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin >> arr[i];
			x.insert(2*arr[i]);
		}
 
	sort(arr,arr+ n);
	ll count = 0;
	
	vector <ll> v; 
	vector <ll> repeat;
	vector <ll> times;
	for(ll i =0 ;i<n;i++)
	{

			if(arr[i+1]!=arr[i])
			{
				v.push_back(arr[i]);
		
			}
		
		else if(arr[i+1] == arr[i])
			{
				count++;
				if(repeat.find(arr[i])==0)
				{
					repeat.push_back(arr[i]);
					times.pushback(0);
				}
				if(repeat.find(arr[i]))
				{
					times[v.size-1]++;
				}

			}		
			else
				continue;
	}
	
	//cout << v[v.size()-1] << endl;


		for(int i =0 ;i<v.size();i++)
	
	{
		for(int j=i+1;j < v.size();j++)
		{
			if(x.find(v[i]+v[j]) != x.end())
			{
				if(repeat.find(v[i]) || repeat.find(v[j]))
				count+=;
			}
		}
	}

	cout << count << endl;
	}
}  
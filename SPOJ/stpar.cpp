#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ;// number of cars
	while(cin >> n && n!=0)
	{
		int arr[n];
		bool state = true;
		for(int i = 0;i<n;i++)
		{
			cin >> arr[i];
		}
		int wanted = 1;
		stack<int> s;
		for(int i = 0;i<n;i++)
		{
			while(!s.empty() && s.top() == wanted)
			{
				wanted++;
				s.pop();
			}
			if(arr[i] == wanted)
				wanted++;
			else if(!s.empty() && s.top()<arr[i])//when you are trying to push a larger number on top a smaller one
			{
				state = false;
				break;
			}
			else
			{
				s.push(arr[i]);
			}

		}
		if(state)
			cout << "yes\n";
		else
			cout << "no\n";
			
	}

}
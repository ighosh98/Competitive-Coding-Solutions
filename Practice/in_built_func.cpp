#include <bits/stdcs++.h>
using namespace std;

int main()
{
	cout << "Enter n";
	cin >> n;
	int array[n];

	for(int i = 0;i < n;i++)
	{
		cin >> array[i];
	}

	auto k = lower_bound(array,array+n,x);
	auto b = upper_bound(array,array+n,x);
	cout << b-a << "\n";
	auto r = equal_range(array,array+n,x);
	cout << r.second
}
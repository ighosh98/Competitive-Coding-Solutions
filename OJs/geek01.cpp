#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, i , j;
	cin >> t;
	while(t--)
	{
		cin >> n;
		vector <int> v1(n),v2(n);
		for ( i = 0;i<n;i++)
		{
			for ( j= 0 ; j< n;j++)
			{
				cin >> v1[j];
			}
			sort(v1.begin(),v1.end());
			v2[i] = v1[n/2];
		}
		sort(v2.begin(), v2.end());
		cout << v2[n/2]<< "\n";
	}
}
/*
some additional concepts
assert( n >=0 && n<=1000); // checks the boundary conditions may be optional unless specified otherwise
2d Vectors
vector < vector<int> > vec(row); // assigning row to the element
vec[i] = vector ,int> (column); // asssigning the column to the element
vec[i].push_back(value); // insert a  given element into a column
sort(vec[i].begin().vec[i].end())
*/
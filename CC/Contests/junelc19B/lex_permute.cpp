//Find all lexicographic permutations of the given string
#include <bits/stdc++.h>
using namespace std;

void permute(string x)
{
	sort(x.begin(),x.end());
	while(1)
	{
		cout << x << " ";
		if(!next_permutation(x.begin(),x.end()))
			break;
	}
}

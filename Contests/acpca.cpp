#include <bits/stdc++.h>
using namespace std;
typedef long int ll;
int main()
{
	ll a,b ,c ;
	cin >> a >> b >> c;
	while ( !(a==0 && b== 0 && c==0))
	{
		if((b-a)==(c-b))
			printf("AP %ld\n",2*c-b);
		if(a*c == b*b)
			printf("GP %ld\n",((c*c)/b));
		cin >> a >> b >> c;
	}


}
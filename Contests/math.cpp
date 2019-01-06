#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	double a,b,c;
	while(t--)
	{
		cin >> a >> b >> c;
		double ans = 1/((1/a)+(1/b)+1/c+2*sqrt(1/(a*b)+ 1/(b*c)+1/(c*a)));
		printf("%.6f\n" ,ans);
	}
}
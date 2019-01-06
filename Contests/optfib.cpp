#include <bits/stdc++.h>
using namespace std;

void multiply(long long f[2][2], long long m[2][2])
{
  long long x =  f[0][0]*m[0][0] + f[0][1]*m[1][0];
  long long y =  f[0][0]*m[0][1] + f[0][1]*m[1][1];
  long long z =  f[1][0]*m[0][0] + f[1][1]*m[1][0];
  long long w =  f[1][0]*m[0][1] + f[1][1]*m[1][1];
 
  f[0][0] = x;
  f[0][1] = y;
  f[1][0] = z;
  f[1][1] = w;
}
int power(long long f[2][2], long long n,int count)//matrix multiplication
{
  if( n == 0.0 || n == 1.0)
      return 0;
  long long m[2][2] = {{1,1},{1,0}};
 
  power(f, n/2,count);
  multiply(f,f);
  count++;
 
  if (n%2)
    { multiply( f , m);
 	  (count)++;
 	}
 return count;
}
int fib(long long k)//finding fib(k)
{
	int count=0;
	long long f[2][2] = {{1,1},{1,0}};
	if (k==0)
	{
	count++	;
	return count;
	}
	count += power(f,k-1,count);
	return count;
}


int main()
{
	int t;
	long long n ,k,m;
	cin >>t;
	while(t--)
	{
		cin >> n>> k>>m;
		int x = fib(k) % m;
		cout << x << endl;

	}
}

// res=a/b;   a*b - res; if (res >= mod) res -= mod; if (res < 0) res += mod;
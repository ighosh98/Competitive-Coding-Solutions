
#include <bits/stdc++.h>
using namespace std;
int numbers[3500], len;
//Inline for saving time
inline bool checkprime (int a)
{
	int i;
	int x = (sqrt(a));
	for(i = 2; i <= x ;i++)
	{
		if (!(a % i))
			return 0;
	}
	return 1;//If 0 returns function execution ends
}


int generate()//list of all primes
{
	for(int i=2; i< 32000; i++)//32000 since sqrt of limits
	{
		if(checkprime(i))
		{
			numbers[len++]= i;
		}
	}
}

inline bool printprimes(int a)// If prime it returns 1 else 0
{
	int i;
	int last = sqrt(a);
for(i=0;i< len && numbers[i]<= last; i++)
{
	if(a % numbers[i] == 0)
	{
		return 0;
	}
}
return 1;
}

int main()
{
	int t,a ,b;
	generate();
	cin >>t;
	for(int i=0;i<t;i++)
		{
			cin >> a >> b;
			if(a==1)
				a++;
			for(int j=a;j<=b;j++)
			{
				if(printprimes(j))
					cout << j << endl;
			}
			cout << endl;
		}
return 0;
} 


#include <bits/stdc++.h>
using namespace std;
void inline swap(int &a,int &b)
{
	int x = a;
	b = a;
	a = x;
}
int main()
{

int a[101],b[101],sum[101], diff[101];
for(int i = 0;i<101;i++)
{
	a[i] = 0;
	b[i] = 0;
	sum[i] = 0;
	diff[i] = 0;
}
string x;
for(int rounds = 0;rounds<10;rounds++)
{
	int carry = 0,borrow = 0;
	cin >> x;
	for(int i = x.length()-1;i>=0;i--)
	{
		sum[i] = (int)x[i] - 48;
	}
	//invert
	for(int i = 0; i<x.length();i++)
	{
		int t = sum[i];
		sum[i] = sum[x.length() - 1];
		sum[x.length() -1] = t;
	}
	/*
	for(int i = 100;i>=0;i--)
	{
		cout << sum[i] ;

	}*/
	
	
	cin >> x;
	for(int i = x.length()-1;i>=0;i--)
	{
		diff[i] = (int)x[i] - 48;
	}
	//invert
	for(int i = 0; i<x.length();i++)
	{
		int t = diff[i];
		diff[i] = diff[x.length() - 1];
		diff[x.length() -1] = t;
	}
	//cout << endl;
  /*for(int i = 100;i>=0;i--)
	{
		cout << diff[i];

	}*/
	// sum and diff are in 
	for(int i = 0;i<101;i++)
	{
		sum[i] = sum[i]+ diff[i]+ carry;
		if(sum[i]>=10)
		{
			sum[i] -=10;
			carry =1;
		}
	} // 2*(i+d)

/*for(int i = 100;i>=0;i--)
	{
		cout << sum[i];

	}	
*/	int remainder = 0;
	bool begin = false;
	for(int i = 100;i>=0;i--)
	{
		a[i] = (sum[i] + remainder)/2;
		if((sum[i]+remainder)%2)
			remainder =10;
		else
			remainder = 0;
	}//dividing by 2

	for(int i = 0;i<101;i++)
	{
		b[i] = a[i] - diff[i] -borrow;
		if(b[i] <0)
		{
			b[i] +=10;
			borrow = 1;
		}
	}
	int theta = 100;
	while(a[theta]==0)
	{
		theta--;
	}
	for(int i = theta;i>=0;i--)
	{
		cout << a[i];
	}
	cout <<"\n";
	while(b[theta]==0)
	{
		theta--;
	}
	for(int i = theta;i>=0;i--)
	{
		cout << b[i];
	}
	cout <<"\n";
	

} 
	
}
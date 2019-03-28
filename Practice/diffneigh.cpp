#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	int n,m;
	cin >> t;
	int a[50][50];
	int count;
	int i = 0;
	int j = 0;
	if(i==0)
	{
		for(j=0;j<50;j++)
		{
			if(i%2==0)
			{
				a[i][j] = 1;
				j++;
				a[i][j] = 1;
				j++;
				a[i][j] = 2;
				j++;
				a[i][j] = 2;
			}
		}
		i++;
		if(i==1)
		{
			a[i][0] = 2;
			for(int j=1;j<50;j++)
			{
				a[i][j] = 3;
				j++;
				a[i][j] = 3;
				j++;
				a[i][j] = 4;
				j++;
				a[i][j] = 4;
				j++;
			}

		}
		i++;
		if(i==2)
		{
			a[i][0] = 2;
			a[i][1] = 4;
			for(j=2;j<50;j++)
			{
				a[i][j] = a[i-2][j-2];
			} 	
			
		}
		a[3][1] =4;
		i =3;
		while(i<50)
		{
			a[i][0] = 1;
			i++;
			a[i][0] = 1;
			i++;
			a[i][0] = 2;
			i++;
			a[i][0] = 2;
			i++;
		}
		i = 4;
		while(i<50)
		{
			a[i][1] = 3;
			i++;
			a[i][1] = 3;
			i++;
			a[i][1] = 4;
			i++;
			a[i][1] = 4;
			i++; 
		}
		for(i = 3;i<50;i++)
		{
			for(j=2;j<50;j++)
			{
				a[i][j]=a[i-2][j-2];
			}
		}


	}
	while(t--)
	{
		cin >> n >> m;
		if(m==1)
		{
			if(n<=2)
			{
				printf("1\n");
				for(i = 0;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
						printf("%d ",a[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("2\n");
				for(i = 0;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
						printf("%d ",a[i][j]);
					}
					printf("\n");
				}

			}

		}
		else if(n==1)
		{
			if(m<=2)
			{
				printf("1\n");
				for(i = 0;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
						printf("%d ",a[i][j]);
					}
				}

			}
			else
			{
				printf("2\n");
				for(i = 0;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
						printf("%d ",a[i][j]);
					}
				}

			}
		}
		else if(n == 2)
		{
			printf("3\n");
			for(i = 0 ;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					if(j%3 == 0)
						printf("1 ");
					if(j%3 == 1)
						printf("2 ");
					if(j%3 == 2)
						printf("3 ");
				}
				printf("\n");
			}
		}
		else if(m == 2 && n > 2)
		{
			printf("3\n");			
			for(j = 0;j<n;j++)
			{
				
				if(j%3 ==0)
				{
					for(i=0;i<2;i++)
					{
						printf("1 ");
					}	
				}
				if(j%3==1)
				{
					for(int i=0;i<2; i++)
					{
						printf("2 ");
					}
				}
				if(j%3==2)
				{
					for(int i=0;i<2; i++)
					{
						printf("3 ");
					}
				}
				printf("\n");
				
			}
		}
		else
		{
			printf("4\n");			
			for(i = 0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}

		}
	}
}






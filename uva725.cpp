#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define CPrint(c)  for(auto i:(c)) { cout<<i<<" "; } nl 
#define eb   emplace_back
#define ef   emplace_front
#define pb   push_back
#define pf   push_front
#define popb pop_back
#define popf pop_front
#define mp   make_pair
using namespace std;
bool isunique(int a,int b)
{
	bool arr[10];
	for(int i=0;i<10;i++)
	{
		arr[i]  = false;
	}
	int count = 0;
	//printf("%d,%d\t",a,b);
	while(a>0)
	{
		int digit = a%10;
		if(arr[digit])
			return false;
		arr[digit]=true;
		a/=10;
		count++;

	}
	while(b>0)
	{
		int digit = b%10;
		if(arr[digit])
			return false;
		arr[digit]=true;
		b/=10;
		count++;

	}

//	printf("count = %d\t",count);
	if(count==9) 
	{
		if(arr[0])
			return false;
	}
	else if(count<9)
		return false;
	return true;
}
int main() {
    int n;
    int first_case = true;
    bool temp1;
    while (scanf("%d", &n), n) {
       if (!first_case) printf("\n");
        bool found_solution = false;
        for (int fghij = 1234; fghij <= 98765 / n; fghij++) {
            int abcde = fghij * n;
            	temp1 = isunique(abcde,(fghij));

		//temp2 = isunique(fghij);
		if(temp1)
		{
			printf("%0.5d / %0.5d = %d\n",abcde,fghij,n);
		found_solution = true;
		}

            
        }
        if (!found_solution) printf("There are no solutions for %d.\n", n);
        first_case = false;
 //       printf("\n");
    }
    return 0;
}
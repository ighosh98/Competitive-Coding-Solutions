#include <bits/stdc++.h>
using namespace std;

void prime(int start, int end) {
    // sieve algo
    int prime[end+1];
    cout << "end =" << end << " start=  " << start << endl;
    for(int i=0;i<=end;i++)
    {
        prime[i] = 1;
    }
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= (sqrt(end)); i++) {
        int num = 2;
        int multiple=i*num;
       // cout << multiple << " ";
        while (multiple <= end) {
       
            prime[multiple] = 0;
            multiple = i*(++num);//redefinition of multiple with int multiple declares a new variable causing issues in th for loop

 //cout << "loop = "<< multiple << " ";
        }
 //       cout << endl;
    }
    //cout << sizeof(prime)<<endl;
    //cout << end-start+1 << endl;
    for (int i = start; i<=end; i++) {
      //  cout << prime[i] << " ";
        if (prime[i] == 0) {
            continue;
        }
        cout << i << " ";
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, n;
        cin >> m >> n;
        prime(m, n);
        cout << "\n";
        
    }
    return 0;
}
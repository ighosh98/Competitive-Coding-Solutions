/* 
Difficult!!!
 Problem Statement
**************************
There are N balls in a row. Initially, the i-th ball from the left has the integer Ai written on it.

When Snuke cast a spell, the following happens:

Let the current number of balls be k. All the balls with k written on them disappear at the same time.
Snuke's objective is to vanish all the balls by casting the spell some number of times.
 This may not be possible as it is. If that is the case, he would like to modify the integers on the minimum number of balls to make his objective achievable.

By the way, the integers on these balls sometimes change by themselves. There will be M such changes.
 In the j-th change, the integer on the Xj-th ball from the left will change into Yj.

After each change, find the minimum number of ls of integers on the balls Snuke needs to make if he wishes to achieve his objective before the next change occurs.
 We will assume that he is quick enough in modifying integers. Here, note that he does not actually perform those necessary ls and leaves them as they are.
*************************************
*/

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int c[200000];// initialized to 0
int main()
{
    int l, m , n , a[200000],b[200000];
    cin >> n;
    cin >> m;
   l = n;
    for(int i = 1;i<=n;i++)
    {
        cin >> a[i];
        c[a[i]]++;
        if(++b[ a[i]-c[ a[i] ] ] == 1 && a[i]-c[a[i]] >= 0)
            l--;
    }
    while(m--)
    {
      int x,y;
        cin >> x;
        cin >> y;        
        if(--(b[a[x] - c[a[x]]]) == 0 && a[x] - c[a[x]] >= 0)
            l ++;
        c[a[x]]--;  
        a[x] = y;  
        c[a[x]] ++;  
        if (a[x] - c[a[x]] >= 1 && ++ b[a[x]- c[a[x]]] ==1)  
            l --; 
        printf("%d\n", l);  
    } 
return 0;
}/*
const int MAXN = 200005;  
   
int n, m, ret, a[MAXN], b[MAXN], c[MAXN];  
int main()
{
    cin >> n >> m;
    ret =n;
// ret = n = Read(), m = Read();  
    for (int i = 1; i <= n; i ++)  
    {  
        cin >> a[i] ;
        c[a[i]] ++;  
        if (a[i] - c[a[i]] >= 0 && ++ b[a[i] - c[a[i]]] == 1)  
            ret --;  
    }  
    while (m --)  
    {  
        int x,y;
        cin >> x >> y;
         if (a[x] - c[a[x]] >= 0 && !-- b[a[x] - c[a[x]]])  
            ret ++;  
        c[a[x]] --;  
        a[x] = y;  
        c[a[x]] ++;  
        if (a[x] - c[a[x]] >= 0 && ++ b[a[x] - c[a[x]]] == 1)  
            ret --;  
        printf("%d\n", ret);  
    }  
}  */
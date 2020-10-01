/*
Search in a row wise and column wise sorted matrix

Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order. The designed algorithm should have linear time complexity.

Company : Amazon 
Platform : mettl
Location : Bangalore
*/

#include <bits/stdc++.h> 

using namespace std; 

int search(int mat[4][4], int n, int x) 
{ 
	if (n == 0) 
		return -1; 
	
	//traverse through the matrix 
	for(int i = 0; i < n; i++) 
	{ 
		for(int j = 0; j < n; j++) 
		//if the element is found 
		if(mat[i][j] == x) 
		{ 
			cout<<"Element found at ("<<i<<", "<<j<<")\n"; 
			return 1; 
		} 
	} 

	cout << "n Element not found"; 
	return 0; 
} 


int main() 
{ 
	int mat[4][4] = { { 10, 20, 30, 40 }, 
					{ 15, 25, 35, 45 }, 
					{ 27, 29, 37, 48 }, 
					{ 32, 33, 39, 50 } }; 
	search(mat, 4, 29); 

	return 0; 
} 


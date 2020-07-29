/*
Find position of the last and first occurrence of a given number in a sorted array. If number does not exist then print lower and upper bound as -1.

Input Format
First line contains an integer n denoting the size of the array.
Second line contains n space separated integers denoting array elements.
Third line contains single integer Q denoting the no of queries.
Q lines follow , each containing a single integer x that is to be searched in the array.

Constraints
1 <= N <= 10^5
1 <= Q <= 100

Output Format
For each query , print the lowerbound and the upperbound for the number x in a new line each.

Sample Input
5
1 2 3 3 4
3
2
3
10
Sample Output
1 1
2 3
-1 -1
Explanation
The first and the last occurrence of 2 in the given array are both 1.
The first occurrence of 3 is at index=2 and last at index=3.
10 is not present in the array so we print -1 for it.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n] = {0};
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		if(!binary_search(arr, arr+n, x)){
			cout << "-1 -1" << endl;
		}
		else{
			auto a = upper_bound(arr, arr+n, x) - arr;
			auto b = lower_bound(arr, arr+n, x) - arr;
			cout << b << " " << a-1 << endl;
		}



	}

	return 0;
}

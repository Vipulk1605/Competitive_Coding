/*
Take N as input, Calculate it's reverse also Print the reverse.

Input Format
Constraints
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321
Explanation
You've to calculate the reverse in a number, not just print the reverse.
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	cout << str;
	return 0;
}

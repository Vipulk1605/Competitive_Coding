/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5
             5 4               4 5
             5 4 3           3 4 5
             5 4 3 2       2 3 4 5
             5 4 3 2 1   1 2 3 4 5
             5 4 3 2 1 0 1 2 3 4 5
             5 4 3 2 1   1 2 3 4 5
             5 4 3 2       2 3 4 5
             5 4 3           3 4 5
             5 4               4 5
             5                   5
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5
5 4               4 5
5 4 3           3 4 5
5 4 3 2       2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2 1 0 1 2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2       2 3 4 5
5 4 3           3 4 5
5 4               4 5
5                   5
*/

#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	//Upper

	for(int i=n;i>=0;i--){
		for(int j=n;j>=i;j--){
			cout<<j << " ";
		}

		for(int j=2*i-1;j>0;j--){
			cout<<"  ";
		}

		for(int j=i;j<=n;j++){
            if(j==0){
                continue;
            }
			cout<<j << " ";
		}
		cout<<endl;
	}

	//Lower

	for(int i=1;i<=n;i++){
		for(int j=n; j>=i;j--){
			cout << j << " ";
		}

		for(int j=1;j<=2*i-1;j++){
			cout<<"  ";
		}

		for(int j=i;j<=n;j++){
			cout<<j << " ";
		}
		cout<<endl;
	}
	return 0;
}

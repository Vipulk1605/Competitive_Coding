#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b==0 ? a : gcd(b, a%b);
}

int main() {

    int n1, n2;
    cin >> n1 >> n2;
    //Relation :- GCD*LCM = a*b
    int lcm = (n1*n2)/gcd(n1,n2);

    cout << lcm << endl;

    return 0;
}

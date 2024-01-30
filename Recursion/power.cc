#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


/*
O(n)
*/
int power (int n, int a) {
    if (a == 0) return 1;
    return n*power(n, a-1);
}


/*
2^6 = (2^6/2)^2 = (2^3)^2 = 2((2^2)^2)
O(logn)
*/
int fastPower (int n, int a) {
    if (a == 0) return 1;

    int p = fastPower(n, a/2); // if a is even
    int psq = p*p;
    if (a%2 != 0) // if a is odd
        psq = n*psq;
    return psq;
}

void solve() {
    int n, a;
    cout<<"Enter a number and its power : \n";
    cin>>n>>a;
    cout<<"Power of number "<<n<<" to the "<<a<<" : "<<power(n, a)<<"\n";
    cout<<"Power of number "<<n<<" to the "<<a<<" (using fastPower): "<<fastPower(n, a)<<"\n";
}

int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

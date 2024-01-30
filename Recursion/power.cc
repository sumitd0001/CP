#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int power (int n, int a) {
    if (a == 0) return 1;
    return n*power(n, a-1);
}

void solve() {
    int n, a;
    cout<<"Enter a number and its power : \n";
    cin>>n>>a;
    cout<<"Power of number "<<n<<" to the "<<a<<" : "<<power(n, a)<<"\n";
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

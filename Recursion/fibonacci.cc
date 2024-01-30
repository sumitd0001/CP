#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int fibonacci(int n) {
    if (n == 0 || n == 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

void solve() {
    int n;
    cout<<"Enter a number : \n";
    cin>>n;
    cout<<n<<" number in fibonaaci series : "<<fibonacci(n)<<"\n";
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

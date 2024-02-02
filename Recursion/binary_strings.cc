#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

/*
put 0th index as 1, so we have use 0 for 1st index, find solution for n-2 places
put 0th index as 1, so we can use 0 or 1 both on 1 st index, so find solution for n-1 remaining ways
if n == 1, 0 or 1 , 2 ways
if n == 0, 1 way
*/

int binary_strings(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    return binary_strings(n-1) + binary_strings(n-2);
}

void solve() {
    int n;
    cout<<"Enter a number : \n";
    cin>>n;
    cout<<"No. of binary string that can be formed with no consecutive 1s : "<<binary_strings(n)<<"\n"  ;
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

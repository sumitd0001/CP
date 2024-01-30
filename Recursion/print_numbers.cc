#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

/*
print the numbers in increasing and decreasing order from
1....N
N....1
*/

void print_numbers(int n) {
    if (n == 0) {
        cout<<"\n";
        return;
    }

    cout<<n<<" ";
    print_numbers(n-1);
    cout<<n<<" ";
}

void solve() {
    int n;
    cout<<"Enter a number : \n";
    cin>>n;
    print_numbers(n);
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

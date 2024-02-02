#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

/*
A can go alone , then find for other n-1
A have n-1 choices to make a pair, and then find for rest n-2
*/
int friends_pairing(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return friends_pairing(n-1) + (n-1)*friends_pairing(n-2);
}

void solve() {
    int n;
    cout<<"Enter total no. of friends : \n";
    cin>>n;
    cout<<"Total number of pairs that can be formed : "<<friends_pairing(n)<<"\n";
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

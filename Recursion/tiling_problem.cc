#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
/*
You are given a tile ofsize 4x1
You need to cover the floor of 4xN size with these tile
In how many way you can do it
*/

/*
Sol:
Total Size : 4xN

You can put 1 tile of 4x1, and then 4x(n-1) is left
You can put 4 tiles in 1x4, and the 4x(n-4) is left
so f(n) = f(n-1) + f(n-4);
*/

int tiling_ways(int n) {
    if (n == 0) return 0;
    if (n <= 3) return 1;
    return tiling_ways(n-1) + tiling_ways(n-4);
}

void solve() {
    int n;
    cout<<"Enter a No. : \n";
    cin>>n;
    cout<<"No. of ways in whivh floor 4x"<<n<<" can be covered : "<<tiling_ways(n);
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

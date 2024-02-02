#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void tower_of_hanoi(int n, char from, char help, char to) {
    if (n == 0) return;

    tower_of_hanoi(n-1, from, to, help);

    cout<<from<<" -> "<<to<<"\n";
    
    tower_of_hanoi(n-1, help, from, to);

}

void solve() {
    int n;
    cout<<"Enter a number : \n";
    cin>>n;
    char from {'A'};
    char help {'B'};
    char to {'C'};
    tower_of_hanoi(n, from, help, to);
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

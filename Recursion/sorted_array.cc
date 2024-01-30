#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

/*
check if the array is sorted
*/

bool sorted_array(int* arr, int i, int n) {
    if (i == n) return true;
    if (arr[i] <= arr[i+1]) return sorted_array(arr, i+1, n);
    else return false;
}

void solve() {
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter array elemets : \n";
    int* arr;
    arr = new int[n];
    for (int i = 0; i<n; ++i) {
        cin>>arr[i];
    }
    cout<<"Array is sorted : "<<sorted_array(arr, 0, n-1)<<"\n";

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

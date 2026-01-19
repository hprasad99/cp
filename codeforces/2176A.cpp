/**
 * https://codeforces.com/problemset/problem/2176/A
 */
#include<iostream>
#include<algorithm>
using namespace std;
int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int mx=0, cmx=0;
    for(int i=0; i<n; i++) {
        mx = max(mx, a[i]);
        if(mx == a[i]) cmx++;
    }
    int res = n - cmx;
    return res;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        int mini_i = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '0' && i >= mini_i) ans++;
            else if(s[i] == '1') mini_i = i + k + 1;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}
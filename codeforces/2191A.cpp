#include<iostream>
#include<map>
using namespace std;
int main() {
    // 2 - 3 - 4 - 1
    // R - B - R - B
    // 1 - 2 - 3 - 4
    // B - R - B - R

    // 52 - 63 - 11
    // R - B - R
    // 11 - 52 - 63
    // R - R - B

    // 3 - 4 - 1 - 2 - 5
    // R - B - R - B - R
    // 1 - 2 - 3 - 4 - 5
    // R - B - R - B - R
    
    // 3 - 1 - 4 - 2 - 5
    // R - B - R - B - R
    // 1 - 2 - 3 - 4 - 5
    // B - B - R - R - R
    
    
    // 66 - 22 - 11
    // R - B - R
    // 11 - 22 - 66
    // R - B - R


    // 1 - 3 - 4 - 2
    // R - B - R - B
    // 1 - 2 - 3 - 4
    // R - B - B - R

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int,char>> v(n);
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            char color = (i%2) ? 'B' : 'R';
            v[i] = {x, color};
        }
        sort(v.begin(), v.end());
        bool bad = false;
        for(int i=1; i<n; i++) {
            if(v[i].second == v[i-1].second) {
                bad = true;
                break;
            }
        }
        cout << (bad ? "NO\n": "YES\n");
        cout<<endl;
    }
    return 0;
}
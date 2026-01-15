/**
 * prize wheel --> divided l sections (0 to l-1)
 * after l-1 -> 0
 * pointer -> a
 * [(a + b) mod l], [(a + 2b) mod l], [(a + 3b) mod l] 
 * l -> 5
 * a -> 3
 * b -> 2
 * 
 * (3 + 2) % 5 = 3
 * (0 + 2*6) % 2 = 0
 * (2 + 3*4) % 8 = 4
 * (0 + 4*1) % 100 = 4
 */
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int l, a, b;
        cin >> l >> a >> b;
        
        int p = a;
        int ans = a;
        for(int i=0; i<l-1; i++) {
            p = (p + b) % l;
            ans = max(p, ans);
        }
        cout << ans << endl;
    }
    return 0;
}

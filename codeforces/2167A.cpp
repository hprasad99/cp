#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a==b && b==c && c==d && a==c && a==d && b==d) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
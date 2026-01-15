#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    int ans = 0;
    while(t--) {
        int prob;
        int temp = 0;
        for(int i=0; i<3; i++) {
            cin >> prob;
            temp += prob;
        }
        if(temp >= 2) {
            ans+=1;
        }
    }
    cout << ans << endl; 
    return 0;
}
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
        int size;
        cin >> size;
        vector<int> cards(size);
        for(int i=0; i<size; i++) {
            cin >> cards[i];
        }
        unordered_map<int, char> mp;
        for(int i=0; i<size; i++) {
            if(i % 2 == 0) {
                mp[cards[i]] = 'R';
            } else {
                mp[cards[i]] = 'B';
            }
        }
        map<int, char> sorted_mp(mp.begin(), mp.end());
        vector<char> ans;
        for (auto &p: sorted_mp) {
            ans.push_back(p.second);
        }
        bool flag = 0;
        for(int i=1; i<ans.size(); i++) {
            if(ans[i] == ans[i-1]) {
                flag = 1;
            }
        }
        if(flag) {
            cout << "NO" << endl;
        }else {
            cout<< "YES" <<endl;
        }
    }
    return 0;
}
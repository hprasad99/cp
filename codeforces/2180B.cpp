#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int size;
        cin >> size;
        vector<string> a(size);
    
        for(int i=0; i<size; i++) {
            cin >> a[i];
        }

        string s = "";
        for(int i=0; i<size; i++) {
            string front = a[i] + s;
            string back = s + a[i];
            s = min(front, back);
        }
        cout<< s << "\n";
    }
    return 0;
}

/**
 * aba
 * bba-aba
 * aba-bba
 * */

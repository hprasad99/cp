#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string word;
        cin >> word;

        int size = word.size();
        if(size > 10) {
            int mid = size - 2;
            cout << word[0] << mid << word[size - 1];
        } else {
            cout << word;
        }
        cout << endl;
    }
    return 0;
}
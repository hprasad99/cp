/**
 * https://codeforces.com/problemset/problem/2171/B
 * 2 -1 7 1 -> 10
 * -1 2 4 -1 -> 6
 * 2 -1 1 5 11 12 1 -1 -> 32 if all 0
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
    int size;
    cin >> size;
    vector<int> a(size);
    for(int i=0; i<size; i++) {
        cin >> a[i];
    } 
    if(a[0] == -1) a[0] = a[size-1];
    if(a[size-1] == -1) a[size-1] = a[0];
    for(int i=0; i<size; i++) {
        if(a[i] == -1) a[i] = 0;
    }
    cout<<abs(a[size-1] - a[0]) << endl;
    for(int i=0; i<size; i++) {
        cout << a[i] << " \n"[i==size-1];
    }
}
    return 0;
} 

/**
 * 2 -1 1 5 11 12 1 -1
 * 2 0 1 5 11 12 1 0
 * 2
 */
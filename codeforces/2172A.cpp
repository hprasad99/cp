#include<iostream>
using namespace std;
int main() {
    int g, c, l, min, max;
    cin >> g >> c >> l;
    if(g > c and g > l) {
        max = g;
    } else if(c > g and c > l) {
        max = c;
    } else {
        max = l;
    }

    if(g < c and g < l) {
        min = g;
    } else if(c < g and c < l) {
        min = c;
    } else {
        min = l;
    }
    int median = 0;
    if(min == g and max == l) {
        median = c;
    } else if(min == c and max == l) {
        median = g;
    } else {
        median = l;
    }

    if((max-min) >= 10) {
        cout << "check again" << endl;
    } else {
        cout << "final " << median << endl;
    }
    return 0;
}
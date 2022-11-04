#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d1 = 2*(a+b);
    int d2 = a+b+c;
    int d3 = 2*(b+c);
    int d4 = 2*(a+c);
    int mi = min(min(d1, d2), min(d3, d4));
    cout << mi;
}

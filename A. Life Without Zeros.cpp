#include <bits/stdc++.h>
using namespace std;

string removeZeros(string s) {
    string res = "";
    for (char c : s) {
        if (c != '0') {
            res += c;
        }
    }
    return res;
}

int main() {
    long long a, b, c, x(0), y(0), z(0);
    string sa, sb, sc;
    cin >> a >> b;
    c = a + b;
    sa = to_string(a);
    sb = to_string(b);
    sc = to_string(c);
    sa = removeZeros(sa);
    sb = removeZeros(sb);
    sc = removeZeros(sc);
    stringstream geek0(sa);
    geek0 >> x;
    stringstream geek1(sb);
    geek1 >> y;
    stringstream geek2(sc);
    geek2 >> z;
    if (x+y == z) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

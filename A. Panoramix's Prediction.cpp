#include <bits/stdc++.h>
using namespace std;

int a, b;
bool prime = true;
int mas[16] = {
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
        37,
        41,
        43,
        47
};

int main(){
    cin >> a >> b;
    for (int i = 0; i < 15; i++) {
        if (a == mas[i] && b == mas[i + 1]) {
            prime = false;
            break;
        }
    }
    if (prime == true) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}

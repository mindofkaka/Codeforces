#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 91) {
            a[i] += 32;
        }
        if (b[i] < 91) {
            b[i] += 32;
        }
    }
    
    if(a < b){
        cout << "-1";
    }else if(a > b){
        cout << "1";
    }else{
        cout << "0";
    }

    return 0;
}

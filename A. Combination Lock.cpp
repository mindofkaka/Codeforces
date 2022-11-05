#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, sum(0); 
    cin >> n;
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < n; i++){
        sum += min(abs(a[i]-b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << sum;
}

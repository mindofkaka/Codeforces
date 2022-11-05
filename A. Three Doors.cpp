#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int x, a[5];
        cin >> x >> a[1] >> a[2] >> a[3];
        if(a[x] == 0 || a[a[x]] == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}

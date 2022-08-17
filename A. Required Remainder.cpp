#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        ll x, y, n;
        cin >> x >> y >> n;
        
        ll ans(0);
        ans = n - n % x + y;
        if(ans <= n){
            cout << ans << endl;
        }else{
            cout << (n - n % x - (x-y)) << endl;
        }
    }
}

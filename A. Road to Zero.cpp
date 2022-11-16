#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll mi = min(x, y);
        ll mx = max(x, y);
        ll z = mx-mi;
        ll ans1 = x*a + y*a;
        ll ans2 = z*a + mi*b;
        cout << min(ans1, ans2) << "\n";
    }
}

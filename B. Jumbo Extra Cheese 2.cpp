#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll x(0), maxx(0);
        for(ll i = 0; i < n; i++){
            ll a, b;
            cin >> a >> b;
            ll mi = min(a, b);
            ll ma = max(a, b);
            if(maxx < ma){
                maxx = ma;
            }
            x += mi;
        }
        ll lrs = 2*maxx;
        ll uds = 2*x;
        cout << lrs+uds << "\n";
    }
}

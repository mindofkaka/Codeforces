#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, res(0), minia(1e9), minib(1e9); 
        cin >> n;
        ll a[n], b[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            minia = min(minia, a[i]);
        }
        for(ll i = 0; i < n; i++){
            cin >> b[i];
            minib = min(minib, b[i]);
        }
        for(ll i = 0; i < n; i++){
            ll d1 = a[i]-minia;
            ll d2 = b[i]-minib;
            res+=max(d1, d2);
        }
        cout << res << "\n";
    }
}

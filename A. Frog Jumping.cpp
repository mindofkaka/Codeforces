#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        ll a, b, k, x = 0, y = 0;
        cin >> a >> b >> k;
        x = k/2;
        y = k/2;
        if(k%2 == 1) x++;
        ll ans = x*a-y*b;
        cout << ans << "\n";
    }
}

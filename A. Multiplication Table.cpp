#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x, count(0);
    cin >> n >> x;
    for(ll i = 2; i <= n; i++){
        if(x%i == 0 && x/i <= n) count++;
    }
    if(n >= x) count++;
    cout << count;
}

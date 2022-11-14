#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll h[n], sum[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
        if(i == 0) sum[0] = h[0];
        else sum[i] = sum[i-1] + h[i];
    }
    
    ll x, mi(1e16), mini;
    for(ll i = 0; i < n-k+1; i++){
        if(i == 0) x = sum[i+k-1];
        else x = sum[i+k-1] - sum[i-1];
        if(x < 0) x *= -1;
        if(x < mi){
            mi = x;
            mini = i;
        }
    }
    cout << mini+1;
}

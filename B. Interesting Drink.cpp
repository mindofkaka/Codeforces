#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int x[n+1], ans;
    for(int i = 0; i < n; i++) cin >> x[i];
    int q; cin >> q;
    sort(x, x+n);
    while(q--){
        int m, count(0); 
        cin >> m;
        ans = upper_bound(x, x+n, m)-x;
        cout << ans << endl;
    }
}

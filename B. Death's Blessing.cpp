#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a, b, sum(0), mx(-1);
        for(int i = 0; i < n; i++){
            cin >> a;
            sum += a;
        }
        for(int i = 0; i < n; i++){
            cin >> b;
            sum += b;
            mx = max(mx, b);
        }
        cout << sum-mx << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m+1];
    for(int i = 0; i < m; i++) cin >> b[i];
    
    sort(a, a+n);
    sort(b, b+m);
    int ans(0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(abs(a[i]-b[j]) < 2){
                b[j] = 1000;
                ans++;
                break;
            }
        }
    }
    cout << ans;
}

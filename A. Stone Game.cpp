#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], mx = -1, mi = 1e9, p, q;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(mx < a[i]){
                mx = a[i];
                p = i;
            }
            if(mi > a[i]){
                mi = a[i];
                q = i;
            }
        }
        int mini = min(p, q);
        int maxi = max(p, q);
        cout << min(maxi+1, min(mini+n-maxi+1, n-mini)) << "\n";
    }
}

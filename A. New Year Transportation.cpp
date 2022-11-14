#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, t;
    cin >> n >> t;
    int a[n];
    for(int i = 0; i < n-1; i++) cin >> a[i];
    
    int portal(0);
    while(portal < t-1){
        portal += a[portal];
    }
    if(portal == t-1) cout << "YES\n";
    else cout << "NO\n";
}

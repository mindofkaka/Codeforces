#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        
        int c = abs(a-b);
        int ans = c/10;
        if(c%10 != 0) ans++;
        cout << ans << "\n";
    }
}

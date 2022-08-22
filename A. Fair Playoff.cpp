#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(max(a, b) < min(c, d) || min(a, b) > max(c, d)){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
}

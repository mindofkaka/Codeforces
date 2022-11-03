#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, max(b, c));
        int mi = min(a, min(b, c));
        if(mx == a && mi == b && mx-mi == c) cout << "YES\n";
        else if(mx == a && mi == c && mx-mi == b) cout << "YES\n";
        else if(mx == b && mi == a && mx-mi == c) cout << "YES\n";
        else if(mx == b && mi == c && mx-mi == a) cout << "YES\n";
        else if(mx == c && mi == a && mx-mi == b) cout << "YES\n";
        else if(mx == c && mi == b && mx-mi == a) cout << "YES\n";
        else cout << "NO\n";
    }
}

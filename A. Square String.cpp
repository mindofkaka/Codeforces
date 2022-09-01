#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; 
        cin >> s;
        int n = s.length();
        if(n%2!=0) cout << "NO\n";
        else{
            if(s.substr(0, n/2) == s.substr(n/2, n)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}

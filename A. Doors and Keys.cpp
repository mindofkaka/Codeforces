#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int rd, gd, bd, rk, gk, bk;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'R') rd = i;
            else if(s[i] == 'B') bd = i;
            else if(s[i] == 'G') gd = i;
            else if(s[i] == 'r') rk = i;
            else if(s[i] == 'g') gk = i;
            else if(s[i] == 'b') bk = i;
        }
        if(rk < rd && gk < gd && bk < bd) cout << "YES\n";
        else cout << "NO\n";
    }
}

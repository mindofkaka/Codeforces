#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    char start = 'a';
    ll count = 0;
    for(int i = 0; i < s.length(); i++){
        ll l1 = abs(s[i]-start);
        ll l2 = 26-abs(l1);
        count += min(l1, l2);
        start = s[i];
    }
    cout << count;
}

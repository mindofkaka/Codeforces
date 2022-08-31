#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c, d, res(0);
    cin >> a >> b >> c >> d;
    string s; cin >> s;
    for(int i = 0; i <= s.length(); i++){
        if(s[i] == '1') res+=a;
        else if(s[i] == '2') res+=b;
        else if(s[i] == '3') res+=c;
        else if(s[i] == '4') res+=d;
    }
    cout << res;
}

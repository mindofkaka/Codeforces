#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    int m, a[100005], count(0);
    cin >> s >> m;
    
    for(int i = 1; i <= s.length(); i++){
        if(s[i-1] == s[i]) count++;
        a[i] = count;
    }
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << a[r-1] - a[l-1] << "\n";
    }
}

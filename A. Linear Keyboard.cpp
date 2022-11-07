#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string k, s;
        cin >> k >> s;
        int a[30], sum(0);
        for(int i = 0; i < k.length(); i++){
            a[k[i]-'a'] = i;
        }
        for(int i = 1; i < s.length(); i++){
            sum += abs(a[s[i]-'a'] - a[s[i-1]-'a']);
        }
        cout << sum << "\n";
    }
}

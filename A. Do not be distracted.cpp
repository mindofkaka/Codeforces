#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; 
    cin >> t;
    while(t--){
        int n, sum(0); 
        cin >> n;
        set<char> arr;
        string s; cin >> s;
        char prev='a';
        for(int i = 0; i < s.length(); i++){
            if(s[i]!=prev){
                arr.insert(s[i]);
                sum++;
            }
            prev = s[i];
        }
        if(sum==arr.size()) cout << "YES\n";
        else cout << "NO\n";
    }
}

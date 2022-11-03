#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        set<int> prob;
        for(int i = 0; i < n; i++){
            prob.insert(s[i]);
        }
        int res = 2*prob.size()+(n-prob.size());
        cout << res << "\n";
    }
}

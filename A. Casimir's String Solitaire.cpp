#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a(0), b(0);
        string s; cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A' || s[i] == 'C'){
                a++;
            }else{
                b++;
            }
        }
        if(a == b) cout << "YES\n";
        else cout << "NO\n";
    }
}

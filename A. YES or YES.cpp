#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        int count = 0;
        string s;
        cin >> s;
        if(s[0] == 89 || s[0] == 121) count++;
        if(s[1] == 69 || s[1] == 101) count++;
        if(s[2] == 83 || s[2] == 115) count++;
        if(count == 3){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}

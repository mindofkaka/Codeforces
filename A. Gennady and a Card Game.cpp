#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s, a;
    cin >> s;
    bool poss = false;
    for(int i = 0; i < 5; i++){
        cin >> a;
        if(a[0] == s[0] || a[1] == s[1]){
            poss = true;
        }
    }
    if(poss){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

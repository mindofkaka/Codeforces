#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        char c;
        vector<int> v;
        bool odd = false;
        cin >> s >> c;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == c) v.push_back(i);
        }
        for(int i = 0; i < v.size(); i++){
            if(v[i]%2 == 0 && s.length()%2 != 0){
                odd = true;
                cout << "YES\n";
                break;
            }
        }
        if(!odd){
            cout << "NO\n";
        }
    }
}

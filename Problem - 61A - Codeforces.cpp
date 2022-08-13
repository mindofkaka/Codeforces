#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    
    int x = s.length();
    int y = t.length();
    for(int i = 0; i < x; i++){
        if(s[i] != t[i]){
            cout << "1";
        }else{
            cout << "0";
        }
    }
}

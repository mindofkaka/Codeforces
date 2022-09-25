#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, g = "hello";
    int j(0), count(0);
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == g[j]){
            j++;
            count++;
            if(count == 5) break;
        }
    }
    
    if(count == 5) cout << "YES";
    else cout << "NO";
}

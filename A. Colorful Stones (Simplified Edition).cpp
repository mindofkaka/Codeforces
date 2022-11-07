#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int count = 0;
    for(int i = 0; i < t.length(); i++){
        if(s[count] == t[i]){
            count++;
        }
    }
    cout << count+1;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] > 64 && s[i] < 91){
            count++;
        }else{
            count--;
        }
    }
    
    if(count <= 0){
        for(int i = 0; i < s.length(); i++){
            if(s[i] > 64 && s[i] < 91){
                s[i] += 32;
            }
        }
        cout << s;
    }else{
        for(int i = 0; i < s.length(); i++){
            if(s[i] > 96 && s[i] < 123){
                s[i] -= 32;
            }
        }
        cout << s;
    }
}

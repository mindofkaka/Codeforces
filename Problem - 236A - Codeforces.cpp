#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; cin >> a;
    
    int x = a.length();
    
    int count = 0;
    for(int i = 0; i < x - 1; i++){
        for(int j = i + 1; j < x; j++){
            if(a[i] == a[j]){
                count++;
                break;
            }
        }
    }
    
    int result = x - count;
    if(result % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
}

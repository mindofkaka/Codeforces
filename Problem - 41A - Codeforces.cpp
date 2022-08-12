#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    
    string rev = string(a.rbegin(), a.rend());
    
    if(b == rev){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

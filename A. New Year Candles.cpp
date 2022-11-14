#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b;
    cin >> a >> b;
    
    int i = a, d, mod;
    while(a >= b){
        d = a/b;
        i += d;
        mod = a%b;
        a = d+mod;
    }
    cout << i;
}

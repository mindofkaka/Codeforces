#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, even(0), odd(0); 
        cin >> n;
        for(int i = 0; i < 2*n; i++){
            cin >> m;
            if(m%2 == 0) even++;
            else odd++;
        }
        if(even == odd) cout << "Yes\n";
        else cout << "No\n";
    }
}

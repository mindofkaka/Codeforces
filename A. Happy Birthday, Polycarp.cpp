#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m(0), k(0); 
        cin >> n;
        
        for(int i = 1; i <= 9; i++){
            m = 0;
            for(int j = 1; j <= 9; j++){
               m = m*10 + i;
               if(m <= n) k++;
            }
        }
        cout << k << "\n";
    }
}

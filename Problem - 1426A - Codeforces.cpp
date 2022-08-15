#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int n, x;
    while(t--){
        cin >> n >> x;
        
        if(n == 1){
            cout << n << "\n";
        }else{
            int k(2), sum(1);
            while(k < n){
                k += x;
                sum++;
            }
            cout << sum << "\n";
        }
    }
}

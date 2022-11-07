#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, n, count(0), sum(0);
        cin >> a >> b >> n;
        while(sum <= n){
            if(a > b){
                b += a;
                count++;
                sum = b;
            }else{
                a += b;
                count++;
                sum = a;
            }
        }
        cout << count << "\n";
    }
}

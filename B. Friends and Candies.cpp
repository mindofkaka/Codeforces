#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], sum(0);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum%n != 0){
            cout << -1 << endl;
        }else{
            int b = sum/n, count(0);
            for(int i = 1; i <= n; i++){
                if(a[i] > b) count++;
            }
            cout << count << "\n";
        }
    }
}

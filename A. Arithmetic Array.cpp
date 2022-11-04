#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], sum(0);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum < n){
            cout << "1\n";
        }else{
            cout << abs(n-sum) << "\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        int n, sum(0), even(0), odd(0);
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i]%2 != 0) odd++;
            else even++;
            sum += arr[i];
        }
        if(sum%2 != 0){
            cout << "YES\n";
        }else{
            if(odd != 0 && even != 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}

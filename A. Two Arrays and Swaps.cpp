#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t, n, k, a[35], b[35];
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j++){
                if(b[j] > a[j]){
                    swap(b[j], a[j]);
                    break;
                }
            }
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        cout << sum << "\n";
    }
}

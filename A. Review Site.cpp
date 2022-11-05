#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], up(0), down(0);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 2) down++;
            else up++;
        }
        cout << up << "\n";
    }
}

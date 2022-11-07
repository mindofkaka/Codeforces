#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int count = 1, mx = 1;
    for(int i = 1; i < n; i++){
        if(a[i-1] < a[i]){
            count++;
        }else{
            mx = max(mx, count);
            count = 1;
        }
    }
    mx = max(mx, count);
    cout << mx;
}

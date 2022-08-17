#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    
    int arr[n+1];
    int i;
    for(i = 1; i <= n; i++){
        cin >> k;
        arr[k] = i;
    }
    
    for(i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
}

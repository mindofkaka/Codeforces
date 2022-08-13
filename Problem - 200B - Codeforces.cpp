#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    double count = 0;
    for(int i = 0; i < n; i++){
        count += arr[i];
    }
    double result = count / n;
    
    cout << fixed << setprecision(12) << result;
}

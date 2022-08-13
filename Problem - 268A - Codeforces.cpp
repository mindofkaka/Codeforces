#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr1[i] >> arr2[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr1[i] == arr2[j]){
                sum++;
            }
        }
    }
    cout << sum;
}

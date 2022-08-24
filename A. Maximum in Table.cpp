#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }
    cout << arr[n][n];
}

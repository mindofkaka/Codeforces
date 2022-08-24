#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                cout << arr[i/2] << " ";
            }else{
                cout << arr[n-((i+1)/2)] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<int> vect(arr, arr + n);
        
        int x = *min_element(vect.begin(), vect.end());
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(vect[i] > x){
                int a = vect[i] - x;
                sum += a;
            }
        }
        cout << sum << endl;
    }
}

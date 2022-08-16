#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int sum(0);
        for(int i = 0; i < 2*n; i++){
            if(i%10 != 3 && i%3 != 0){
                sum++;
            }
            if(sum == n){
                cout << i << endl;
                break;
            }
        }
    }
}

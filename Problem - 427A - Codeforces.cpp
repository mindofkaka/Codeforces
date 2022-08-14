#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int x, p = 0, q = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == -1){
            if(p > 0){
                p--;
            }else{
                q++;
            }
        }else{
            p += x;
        }
    }
    cout << q;
}

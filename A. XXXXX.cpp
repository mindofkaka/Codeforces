#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n+1], sum(0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum%x != 0){
            cout << n << endl;
        }else{
            int sum1, sum2, m1, m2, M;
            sum1 = sum2 = sum;
            m1 = m2 = n;
            for(int i = n-1; i >= 0; i--){
                if((sum1-a[i]) % x != 0){
                    m1--;
                    sum1 -= a[i];
                    break;
                }else{
                    sum1 -= a[i];
                    m1--;
                }
            }
            for(int i = 0; i < n; i++){
                if((sum2-a[i]) % x != 0){
                    m2--;
                    sum2 -= a[i];
                    break;
                }else{
                    sum2 -= a[i];
                    m2--;
                }
            }
            M = max(m1, m2);
            sum = max(sum1, sum2);
            if(sum%x != 0){
                cout << M << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
}






#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    
    int sum = 0, pi, qi;
    for(int i = 0; i < n; i++){
        cin >> pi >> qi;
        
        if(qi - pi >= 2){
            sum ++;
        }
    }
    cout << sum;
}

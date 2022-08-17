#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int x = n-i;
        int y = x%i;
        if(x > 0 && y == 0){
            sum++;
        }
    }
    
    
    
    cout << sum;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    
    int x, sum = 0;
    for(int i = 1; i <= 10; i++){
        x = k*i;
        sum++;
        if(x % 10 == r || x % 10 == 0){
            break;
        }
    }
    cout << sum;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    while(n > 0){
        if(n >= 100){
            n -= 100;
            sum++;
        }else if(n >= 20){
            n -= 20;
            sum++;
        }else if(n >= 10){
            n -= 10;
            sum++;
        }else if(n >= 5){
            n -= 5;
            sum++;
        }else if(n >= 1){
            n -= 1;
            sum++;
        }
    }
    
    if(n == 0){
        cout << sum;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    int result1 = 0;
    int result2 = 0;
    if(a >= b){
        result1 += b;
        result2 += (a - b) / 2;
    }else{
        result1 += a;
        result2 += (b - a) / 2;
    }
    
    cout << result1 << " " << result2;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    int sum = 0;
    while(n != 0){
        if(n % 10 == 4 || n % 10 == 7){
            sum++;
        }
        n /= 10;
    }
    
    if(sum == 4 || sum == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

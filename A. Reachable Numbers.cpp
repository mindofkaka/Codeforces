#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k = 0; 
    cin >> n;
    while(n > 9){
        n++;
        k++;
        while(n%10 == 0){
            n /= 10;
        }
    }
    cout << k+9;
}

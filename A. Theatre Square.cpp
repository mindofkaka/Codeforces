#include <iostream>
using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    
    long long x = n / a;
    long long y = m / a;
    
    if(n % a != 0){
        x++;
    }
    if(m % a != 0){
        y++;
    }
    
    long long sum = x*y;
    cout << sum;
}

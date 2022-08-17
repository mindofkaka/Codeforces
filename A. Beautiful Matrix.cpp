#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, row, col;
    for(row = 1; row <= 5; row++){
        for(col = 1; col <= 5; col++){
            cin >> n;
            if(n == 1){
                cout << abs(row - 3) + abs(col - 3);
            }
        }
    }
    return 0;
}

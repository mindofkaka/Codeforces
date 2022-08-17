#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    sort(arr, arr+3);
    int x = arr[1]-arr[0];
    int y = arr[2]-arr[1];
    cout << x+y << endl;
}

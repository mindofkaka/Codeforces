#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    
    cin >> N >> K;
    
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int count = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] >= arr[K-1] && arr[i] != 0){
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

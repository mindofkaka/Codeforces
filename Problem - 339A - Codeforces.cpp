#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char arr[100];
    
    int j = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            arr[j] = s[i];
            j++;
        }
    }
    sort(arr, arr + j);
    for(int i = 0; i < j; i++){
        if(i == j - 1){
            cout << arr[i] << endl;
        }else{
            cout << arr[i] << "+";
        }
    }
}

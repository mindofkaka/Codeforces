#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < 2*(n-i); j++){
			cout << " ";
		}
		for(int k = 0; k < 2*i+1; k++){
			if(k == 2*i){
				cout << i-(k-i);
			}else if(k <= i){
				cout << k << " ";
			}else{
				cout << i-(k-i) << " ";
			}
		}
		cout << "\n";
	}
	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j < (n-i)*2; j++){
			cout << " ";
		}
		for(int k = 0; k < 2*i+1; k++){
			if(k == 2*i){
				cout << i-(k-i);
			}else if(k <= i){
				cout << k << " ";
			}else{
				cout << i-(k-i) << " ";
			}
		}
		cout << "\n";
	}
}

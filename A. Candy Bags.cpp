#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int k = 1, l = n*n, m = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(j%2 == 1){
				cout << k << " ";
				k++;
			}else{
				cout << l-m << " ";
				m++;
			}
		}
		cout << "\n";
	}
}

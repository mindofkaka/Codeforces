#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a[n+1], odd(0), even(0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i]%2 == 0) even++;
		else odd++;
	}
	if(even > odd){
		for(int i = 1; i <= n; i++){
			if(a[i]%2 != 0){
				cout << i;
				break;
			}
		}
	}else{
		for(int i = 1; i <= n; i++){
			if(a[i]%2 == 0){
				cout << i;
				break;
			}
		}
	}
}

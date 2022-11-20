#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int fifty(0), twefiv(0);
	if(a[0] != 25){
		cout << "NO";
		return 0;
	}
	for(int i = 0; i < n; i++){
		if(a[i] == 25){
			twefiv++;
		}else if(a[i] == 50){
			if(twefiv < 1){
				cout << "NO\n";
				return 0;
			}else{
				twefiv--;
				fifty++;
			}
		}else{
			if(twefiv > 0 && fifty > 0){
				twefiv--;
				fifty--;
			}else if(twefiv >= 3){
				twefiv -= 3;
			}else{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES\n";
}

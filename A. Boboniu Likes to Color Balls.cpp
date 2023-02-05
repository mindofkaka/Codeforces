#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int a[4], even(0), odd(0);
		for(int i = 0; i < 4; i++){
			cin >> a[i];
			if(a[i]%2 == 0) even++;
			else odd++;
		}
		if((odd == 1 && even == 3) || (even == 4)){
			cout << "YES\n";
		}else{
			int flag = 0, j = 2;
			while(j--){
				if(a[0] <= 0 || a[1] <= 0 || a[2] <= 0) break;
				a[0]--; a[1]--; a[2]--;
				a[3]+=3;
				odd = 0, even = 0;
				for(int i = 0; i < 4; i++){
					if(a[i]%2 == 0) even++;
					else odd++;
				}
				if((odd == 1 && even == 3) || (even == 4)){
					flag = 1;
					break;
				}else{
					flag = 0;
				}
			}
			if(flag == 1){
				cout << "YES\n";
			}else{
				cout << "NO\n";
			}
		}
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, count = 0;
	string s, ans = "";
	cin >> n >> k >> s;
	if(k == 0){
		cout << s;
		return 0;
	}else if(n == 1){
		cout << 0;
		return 0;
	}
	for(int i = 0; i < n; i++){
		if(i == 0){
			if(s[i] != '1'){
				ans+='1';
				count++;
			}else{
				ans+='1';
			}
		}else if(i != 0){
			if(s[i] != '0'){
				ans+='0';
				count++;
			}else{
				ans+='0';
			}
		}
		if(count == k){
			for(int j = i+1; j < n; j++){
				ans+=s[j];
			}
			break;
		}
	}
	cout << ans;
}

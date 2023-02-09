#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int a1, a2, a3, a4;
		cin >> a1 >> a2 >> a3 >> a4;
		if(a1 == 0){
			cout << "1\n";
		}else{
			cout << a1+min(a2, a3)*2+min(a1+1, abs(a2-a3)+a4) << "\n";
		}
	}
}

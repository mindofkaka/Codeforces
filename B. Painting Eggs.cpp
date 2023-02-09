#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n+1], g[n+1], gval = 0, aval = 0, tmpa = 0, tmpg = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i] >> g[i];
	}
	for(int i = 0 ; i < n; i++){
		tmpg = gval+g[i];
		tmpa = aval+a[i];
		if(abs(tmpa-gval) <= 500){
			aval+=a[i];
			cout << 'A';
		}else{
			gval+=g[i];
			cout << 'G';
		}
	}
}

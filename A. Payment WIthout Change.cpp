#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a, b, n, S, d;
	scanf("%d %d %d %d", &a, &b, &n, &S);
	d = min(S/n, a);
	d = S-d*n;
	if(d > b){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; scanf("%d", &t);
	while(t--){
		solve();
	}
}

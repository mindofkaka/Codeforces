#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	  int n, l, ans;
	  cin >> n >> l;
	  int a[n+1];
	  for(int i = 0; i < n; i++) cin >> a[i];
	  sort(a, a+n);
	  ans = max(a[0], l-a[n-1])*2;
	  for(int i = 0; i < n-1; i++){
		   ans = max(ans, a[i+1]-a[i]);
	  }
	  cout << fixed << setprecision(20);
	  cout << ans/2.0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int a[n], s(0), d(0), k(0), l(0), r(n-1);
	for(int i = 0; i < n; i++) cin >> a[i];
	while(l <= r){
		if(k%2==0){
			if(a[l] >= a[r]) s+=a[l++];
			else s+=a[r--];
		}else{
			if(a[l] >= a[r]) d+=a[l++];
			else d+=a[r--];
		}
		k++;
	}
	cout << s << " " << d;
}
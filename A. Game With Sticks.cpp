#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int mi = min(n, m);
	if(mi%2 == 0){
		cout << "Malvika";
	}else{
		cout << "Akshat";
	}
}

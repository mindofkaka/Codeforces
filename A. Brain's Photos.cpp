#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	char c[n][m];
	bool col = false;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> c[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(c[i][j] == 'C' || c[i][j] == 'M' || c[i][j] == 'Y'){
				col = true;
				break;
			}
		}
	}
	if(col){
		cout << "#Color\n";
	}else{
		cout << "#Black&White\n";
	}
}
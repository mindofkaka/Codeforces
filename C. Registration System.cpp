#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	map<string, int> data;
	
	while(n--){
		string s;
		cin >> s;
		
		if(data.count(s) == 0){
			cout << "OK\n";
			data[s]++;
		}else{
			cout << s << data[s] << "\n";
			data[s]++;
		}
	}
}

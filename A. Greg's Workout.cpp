#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a, ch = 0, bi = 0, ba = 0;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if(i%3 == 0){
			ba+=a;
		}else if(i%3 == 2){
			bi+=a;
		}else{
			ch+=a;
		}
	}
	if(bi > ch && bi > ba){
		cout << "biceps";
	}else if(ba > ch && ba > bi){
		cout << "back";
	}else{
		cout << "chest";
	}
}

#include <iostream>
using namespace std;

int main(){
	int n, k, l, c, d, p, np, nl;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	int drink = (k*l)/nl;
	int limes = c*d;
	int salt = p/np;
	int low = min(drink, min(limes, salt));
	
	cout << low/n << "\n";
}
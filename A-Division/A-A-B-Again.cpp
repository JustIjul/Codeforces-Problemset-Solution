#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int a, b;

		a = n % 10;
		n /= 10;
		b = n % 10;

		cout << a+b << endl;
	}

	return 0;
}


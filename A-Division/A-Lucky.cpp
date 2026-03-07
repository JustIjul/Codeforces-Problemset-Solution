#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		int n, a = 0, b = 0;
		cin >> n;
		for(int i = 0; i < 3; i++){
			a += n % 10;
			n /= 10;
		}
		
		for(int i = 0; i < 3; i++){
			b += n % 10;
			n /= 10;
		}

		if(a == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}


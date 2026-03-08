#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		while(n>1){
			if(n%2==0)n/=2;
			if(n%2==1)cout << "NO" << endl;
		}
	}
	return 0;
}


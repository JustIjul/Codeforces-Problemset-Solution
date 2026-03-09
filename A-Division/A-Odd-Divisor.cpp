#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		while(n>2){
			if(n%2==0)n/=2;
			if(n%2==1){
				cout << "YES" << endl;
				break;
			}
		}
		if(n==0 || n==2)cout<<"NO"<<endl;
	}
	return 0;
}


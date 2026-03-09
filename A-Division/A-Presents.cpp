#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	int p1[n+1], p2[n+1];
	for(int i = 1; i <= n; i++){
		cin >> p1[i];
	}

	for(int i = 1; i <= n; i++){
		p2[p1[i]] = i;
	}

	for(int i = 1; i <= n; i++){
		cout << p2[i] << " ";
	}

	return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	int m[n];
	for(int i = 0; i < n; i++){
		cin >> m[i];
	}

	int x;
	// if(m[0]%2==m[n-1]%2)x=m[0]%2;
	
	if(m[0]%2==m[1]%2)x=m[0]%2;
	else if(m[1]%2==m[2]%2)x=m[1]%2;
	else if(m[2]%2==m[3]%2)x=m[2]%2;
	
	// cout << x << endl;



	for(int i = 0; i < n; i++){
		if(m[i]%2!=x){
			cout << i+1;
			break;
		}
	}

	return 0;
}


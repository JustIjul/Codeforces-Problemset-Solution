#include <bits/stdc++.h>

using namespace std;

int main(){

	long long n, m, temp = 0, count = 0;
	cin >> n >> m;
	while(m--){
		int i;
		cin >> i;
		if(i<temp) {
			count += (n-temp); 
			temp = 0;
		}
		count += i-temp;
		temp = i;
	}

	cout << count-1;
	return 0;
}


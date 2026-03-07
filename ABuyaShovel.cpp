#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, r, count = 1;
	cin >> k >> r;
	int temp = k;

	for(int i = 0; i < 10; i++){
		if(temp % 10 == r || temp % 10 == 0) break;
		temp += k;
		count++;
	}

	cout << count;

	return 0;
}


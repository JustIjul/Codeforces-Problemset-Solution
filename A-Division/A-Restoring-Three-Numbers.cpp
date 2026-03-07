#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<int> v;
	for(int i = 0; i < 4; i++){
		int n;
		cin >> n;
		v.push_back(n);
	}

	int maks = v[0];
	for(int i = 1; i < 4; i++){
		maks = max(maks, v[i]);
	}

	while(v.size()){
		if(v.back() != maks) cout << maks - v.back() << " ";
		v.pop_back();
	}

	return 0;
}


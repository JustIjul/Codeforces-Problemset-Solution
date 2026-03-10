#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, q;
	vector<int> v;

	cin >> n;
	while(n--){
		int i;
		cin >> i;
		v.push_back(i);
	}

	cin >> q;
	while(q--){
		int x, count = 0;
		cin >> x;
		for(int i = 0; i < v.size(); i++)if(x >= v[i])count++;
		cout << count << endl;
	}

	return 0;
}


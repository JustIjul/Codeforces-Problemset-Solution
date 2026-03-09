#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m;
	cin >> n >> m;
	vector<int> v;
	for(int i = 0; i < m; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	int mins = v[n-1] - v[0];
	for(int i = 1; i < m-n+1; i++) if(mins > (v[n-1+i] - v[i])) mins = (v[n-1+i] - v[i]);
	
	// for(int i = 0; i < m; i++) cout << v[i] << " ";

	cout << mins;


	return 0;
}


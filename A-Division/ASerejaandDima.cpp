#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	deque<int> dq;
	cin >> n;
	while(n--){
		int i;
		cin >> i;
		dq.push_back(i);
	}

	int a = 0, b = 0;
	bool ab = true;
	while(!dq.empty()){
			if(ab){
				if(dq.front() > dq.back()){
					a += dq.front();
					dq.pop_front();
				}else{
					a += dq.back();
					dq.pop_back();
				}
				ab = false;
			}else{
				if(dq.front() > dq.back()){
					b += dq.front();
					dq.pop_front();
				}else{
					b += dq.back();
					dq.pop_back();
				}
				ab = true;
			}
	}

	cout << a << " " << b;

	return 0;
}


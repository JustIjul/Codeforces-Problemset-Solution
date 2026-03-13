#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;
	
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		
		queue<char>q;
		for(int i = 0; i < n; i++){
			q.push(s[i]);
		}

		int p[256];
		for(int i = 0; i < 256; i++)p[i]=0;

		int count = 0;
		for(int i = 0; i < n; i++){
			if(p[q.front()] == 0){
				count+=2;
				p[q.front()]=1;
			}else count++;
			q.pop();
		}
		
		cout << count << endl;
	}

	return 0;
}


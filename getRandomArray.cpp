#include<bits/stdc++.h>
#define int long long
#define pr(a) for(auto it: a)cout<<it<<" ";cout<<endl;
#define pm(a) for(auto it: a)cout<<it.first<<" "<<it.second<<" "<<endl;
using namespace std;


//GET A RANDOM INTEGER FROM RANGE LB: LOWER BOUND TO RB: UPPER BOUND
int getRandomInteger(int lb, int ub) {
	return (rand() % (ub - lb + 1)) + lb;
}

int32_t main() {
  //N-> SIZE OF ARRAY YOU WANT
	int n;
	cin >> n;
	vector<int>arr;
  // RANGE OF ELEMENTS IN THE ARRAY
	int l, r;
	cin >> l >> r;
	for (int i = 1; i <= n; i++) {
		int x = getRandomInteger(l, r);
		arr.push_back(x);
	}
  //GET THE SIZE OF ARRAY
	cout << n << endl;
  //GET THE ARRAY
	pr(arr);
}

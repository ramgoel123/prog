#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
#include <map>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <list>
#include <stdexcept>

using namespace std;

int main()
{
    freopen("lemonade.in", "r", stdin);
    freopen("lemonade.out", "w", stdout);
	
	int n,in;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	
	int ans=0;
	for(int i=0; i<n; i++){
		if(v[i] >= i)
			ans++;
	}
	cout<<ans;
	

	return 0;
}

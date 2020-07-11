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
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);
	
	int n,q;
	cin>>n>>q;
	vector<int> v;
	
	int in;
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	int left, right, x1, x2;
	for(int i=0; i<q; i++){
		cin>>left>>right;
		x1=lower_bound(v.begin(), v.end(), left)-v.begin();
		x2=upper_bound(v.begin(), v.end(), right)-v.begin();
		cout<<x2-x1<<endl;
	}
	
	
	
	

	return 0;
}

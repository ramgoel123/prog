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

int n,q;
vector<int> v,prefix,query;


int main()
{
	//freopen("baseball.in", "r", stdin);
    //freopen("baseball.out", "w", stdout);
	
	cin>>n>>q;
	int in,cur=0;
	for(int i=0; i<n; i++){
		cin>>in;
		cur+=in;
		v.push_back(in);
		prefix.push_back(cur);
	}
	int ans=0;
	for(int i=0; i<q; i++){
		cin>>in;
		ans=0;
		ans=lower_bound(prefix.begin(), prefix.end(), in+1) - prefix.begin();
		cout<<ans+1<<endl;
	}
	
	
	return 0;
}
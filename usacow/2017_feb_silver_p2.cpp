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
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
	
	int n,k,b,in;
	vector<int> v, bad, prefix;
	cin>>n>>k>>b;
	
	for(int i=0; i<b; i++){
		cin>>in;
		//cout<<"LOL"<<endl;
		bad.push_back(in);
	}
	sort(bad.begin(),bad.end());
	for(int i=0; i<n; i++){
		if(binary_search(bad.begin(), bad.end(), i+1))
			v.push_back(0);
		else
			v.push_back(1);
	}
	//cout<<"LOLLL"<<v[0]<<endl;
	
	int cur=0;
	for(int i=0; i<n; i++){
		cur+=v[i];
		prefix.push_back(cur);
	}
	int max=0;
	for(int i=1; i<n-k+1; i++){
		int c=prefix[i+k-1] - prefix[i-1];
		//cout<<"LOL"<<c<<endl;
		if(c >= max)
			max=c;
	}
	if(max >= k)
		cout<<0;
	else
		cout<<k-max;
	

	return 0;
}

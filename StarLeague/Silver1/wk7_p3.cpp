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
    //freopen("fairphoto.in", "r", stdin);
    //freopen("fairphoto.out", "w", stdout);
	
	vector<pair<int,int>> v;
	pair<int,int> p;
	int n,in;
	string s;
	
	vector<int> prefix;
	cin>>n;
	
	p.first=0;
	p.second=0;
	v.push_back(p);
	
	int cur=0;
	prefix.push_back(0);
	for(int i=0; i<n; i++){
		cin>>in>>s;
		if(s=="G")
			p.second=1;
		else
			p.second=-1;
		p.first=in;
		v.push_back(p);
		
	}
	sort(v.begin(), v.end());
	
	for(int i=0; i<n+1; i++){
		p=v[i];
		cur+=p.second;
		prefix.push_back(cur);
	}
	
	
	
	int maxdist=0;
	for(int right=n; right>=1; right--){
		for(int left=0; left<right; left++){
			if(prefix[left]==prefix[right]){
				
				int dist=v[right-1].first-v[left].first;
				//cout<<"BWAH "<<left<<" "<<right<<" "<<dist<<endl;
				if(dist >= maxdist)
					maxdist=dist;
				break;
			}
		}
	}
	cout<<maxdist;

	
	
	
	

	return 0;
}

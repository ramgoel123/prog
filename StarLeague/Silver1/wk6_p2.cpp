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
    //freopen("lemonade.in", "r", stdin);
    //freopen("lemonade.out", "w", stdout);
	
	int n,k;
	cin>>n>>k;
	
	vector<int> a,b;
	int in1, in2;
	for(int i=0; i<n; i++){
		cin>>in1>>in2;
		a.push_back(in1);
		b.push_back(in2);
	}
	
	vector<pair<int,int>> v1;
	pair<int,int> p1;
	for(int i=0; i<n; i++){
		p1.first=a[i];
		p1.second=i;
		v1.push_back(p1);
	}
	int maxval=0,maxi=0;
	sort(v1.begin(),v1.end());
	//cout<<"HELLO "<<v1[0].first<<v1[0].second<<endl;
	for(int i=n-1; i>=n-k; i--){
		int val=b[v1[i].second];
		if(val >= maxval){
			maxval=val;
			maxi=v1[i].second;
		}
	}
	cout<<maxi+1;
	
	
	
	

	return 0;
}

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
	
	int n;
	string s1,s2,s3;
	vector<string> x;
	vector<vector<string>> v;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s1>>s2>>s3;
		x.clear();
		x.push_back(s1);
		x.push_back(s2);
		x.push_back(s3);
		sort(x.begin(), x.end());
		v.push_back(x);
	}
	
	int maxc=0,c;
	for(int i=0; i<n; i++){
		c=0;
		//cout<<"HELLO "<<v[i][0]<<v[i][1]<<v[i][2]<<endl;
		for(int j=0; j<n; j++){
			if(v[j]==v[i])
				c++;
		}
		if(c>=maxc)
			maxc=c;
	}
	cout<<maxc;

	return 0;
}

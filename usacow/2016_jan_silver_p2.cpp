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

int first_appearance(vector<int> p, int val)
{
	int n=p.size();
	for(int i=0; i<n; i++){
		if(p[i]==val){
			return(i);
		}
	}
	return(-1);
}

int last_appearance(vector<int> p, int val)
{
	int n=p.size();
	for(int i=n-1; i>=0; i--){
		if(p[i]==val){
			return(i);
		}
	}
	return(-1);
}



int main()
{
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
	
	int n,in,cur=0;
	vector<int> v,psum;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>in;
		in=in%7;
		v.push_back(in);
		cur+=in;
		cur=cur%7;
		psum.push_back(cur);
	}
	
	int max=0;
	for(int m=0; m<7; m++){
		int f=first_appearance(psum, m);
		int l=last_appearance(psum, m);
		if(f==-1 || l==-1)
			continue;
		if(l-f >= max)
			max=l-f;
	}
	cout<<max;
	

	return 0;
}

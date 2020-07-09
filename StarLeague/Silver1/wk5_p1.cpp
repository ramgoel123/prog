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

int n;
vector<string> v1,v2;
vector<int> v;

int bin_search(string s)
{
	int low=0, high=n-1, x;
	if(v1[high]==s)
		return(high);
	while(high >= low){
		x=(low+high)/2;
		if(v1[x]==s){
			return(x);
		}
		if(v1[x] > s){
			high=x-1;
		}
		else{
			low=x+1;
		}
	}
	return(-1);
}

int main()
{
    int in1,maxdiff=0,k;
	string in,s,maxs;
	cin>>n;

	
	for(int i=0; i<n; i++){
		cin>>in;
		v1.push_back(in);
		cin>>in1;
		v.push_back(in1);
	}
	for(int i=0; i<n; i++){
		cin>>s;
		v2.push_back(s);
	}
	
	//cout<<"HELLO"<<v2[0]<<endl;
	
	for(int i=0; i<n; i++){
		s=v2[i];
		//search for s in v1
		// if v1[k]=s, then want maximum of v[k]-(i+1) 
		// if s not in v1, continue
		
		k=bin_search(s);
		
		//cout<<"BWAH"<<k<<endl;
		
		int diff=v[k]-i-1;
		if(k==-1){
			diff=n-i;
		}
		if(diff> maxdiff){
			maxdiff=diff;
			maxs=s;
		}
		
	}
	cout<<maxs;
	

	return 0;
}

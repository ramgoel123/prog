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
    //freopen("bcount.in", "r", stdin);
    //freopen("bcount.out", "w", stdout);
	
	int n,q,left,right;
	cin>>n>>q;
	vector<int> v,v1,v2,v3;
	
	int in,cur1=0,cur2=0,cur3=0;
	v1.push_back(0);
	v2.push_back(0);
	v3.push_back(0);
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
		if(in==1)
			cur1++;
		if(in==2)
			cur2++;
		if(in==3)
			cur3++;
		v1.push_back(cur1);
		v2.push_back(cur2);
		v3.push_back(cur3);
	}
	
	
	for(int i=0; i<q; i++){
		cin>>left>>right;
		cout<<v1[right]-v1[left-1]<<" "<<v2[right]-v2[left-1]<<" "<<v3[right]-v3[left-1]<<endl;
	}
	
	
	
	

	return 0;
}

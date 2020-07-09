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
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
	
	int n,in;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(),v.end());

	int max_consec=0,max_start=0,i=0,max_c=0;
	while(i < n-1)
	{
		int val=v[i],end=0,consec=0;
		for(int j=i; j<n; j++){
			if(v[j]<=v[i]+n-1){
				end++;
			}
			if(v[j]==v[i]+j-i)
				consec++;
		}
		
		if(end>=max_consec){
			max_consec=end;
			max_start=i;
		}
		if(consec>=max_c)
			max_c=consec;
		i=i+end;
	}
	//cout<<"BWAH"<<max_consec<<max_start<<endl;
	//cout<<max_consec<<max_start;

	int ANS_MIN=0,ANS_MAX=0;
	if(max_c==n-1){
		ANS_MIN=2;
	}
	else{
		ANS_MIN=n-max_consec;
	}
	//cout<<ANS_MIN;
	
	if(v[1]-v[0] <= v[n-1]-v[n-2]){
		ANS_MAX=v[n-1]-v[1]-(n-2);
	}
	else{
		ANS_MAX=v[n-2]-v[0]-(n-2);
	}
	
	cout<<ANS_MIN<<endl<<ANS_MAX;

	return 0;
}

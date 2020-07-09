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

int n,m,c;
vector<int> v;

int next_index(int start, int k)
{
	// start at index start, pick up all guys <=v[start]+k, output end index
	int end = upper_bound(v.begin(), v.end(), v[start]+k) - v.begin();
	//cout<<"BWAH "<<start<<" "<<end<<endl;
	
	end--;
	
	int flag=0;
	if(end-start+1 >= c){
		end=start+c-1;
		flag=1;
	}
	
/*
	if(v[start]+k > v[end] && flag==0)
		end=end-1;
*/
	//cout<<"LOL "<<start<<" "<<end<<endl;

	return(end);
}

int can_pick_up(int k)
{
	int ans=0, cur_index=0, next, diff;
	while(true){
		next=next_index(cur_index, k);
		diff=next-cur_index+1;
		//cout<<"HELLO"<<cur_index<<next<<diff<<ans<<endl;
		ans++;
		if(next==n-1){
			break;
		}
		cur_index=next+1;
	}
	return(ans);
	
}

int is_k_good(int k)
{
	int no_buses = can_pick_up(k);
	if(no_buses <= m)
		return(true);
	return(false);
}

int main()
{
    freopen("convention.in", "r", stdin);
    freopen("convention.out", "w", stdout);
	
	int in;
	cin>>n>>m>>c;
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
/*
	for(int k=0; k<100*n; k++){
		int no_buses=can_pick_up(k);
		if(no_buses <= m){
			cout<<k;
			break;
		}
	}
*/
	// want to find min k s.t. k is good; it goes FFFFFTTTTTTTT
	
	int low=0, high=v[n-1], x;
	while(high >= low){
		x=(low+high)/2;
		int bool1=is_k_good(x-1);
		int bool2=is_k_good(x);
		//cout<<"ANS "<<bool1<<bool2<<endl;
		if(bool1==false && bool2==true){
			cout<<x;
			break;
		}
		if(bool1==false && bool2==false){
			low=x+1;
		}
		if(bool1==true && bool2==true){
			high=x-1;
		}
	}
	
	//cout<<can_pick_up(4);
	

	return 0;
}


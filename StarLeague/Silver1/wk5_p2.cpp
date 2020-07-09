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

int n,k;
vector<int> v;

int next_index(int start, int r)
{
	// want to find max index end s.t. v[end]-v[start]<=2*r
	// i.e. v[end] <= v[start] + 2*r
	
	int end=upper_bound(v.begin(), v.end(), v[start]+2*r) - v.begin();
	
	if(end==n-1)
		return(end-1);
	return(end-1);
}

int num_bombs(int r)
{
	// finds out how many bombs needed, given r
	int ans=0,index=0,next=0;
	while(true){
		//cout<<"HELLO"<<index<<" "<<next<<" "<<ans<<endl;
		next=next_index(index,r);
		ans++;
		//cout<<"BWAH"<<index<<" "<<next<<" "<<ans<<endl;
		if(next==n-1){
			return(ans);
		}
		index=next+1;
	}
	return(ans);
}

int main()
{
	//freopen("angry.in", "r", stdin);
    //freopen("angry.out", "w", stdout);
	
	
    int in;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(),v.end());
	
	for(int i=0; i<n; i++){
		if(num_bombs(i) <= k){
			cout<<i;
			break;
		}
	}
	

	return 0;
}

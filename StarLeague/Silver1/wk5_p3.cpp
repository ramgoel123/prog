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
vector<int> v;


int num_z_working(int x, int y)
{
	// indices x,y, want to find no. of z with YZ \in [XY, 2*XY]
	//int val1=v[x], val2=v[y];
	// val3 \in [ 2*v[y]-v[x] , 3*v[y]-2*v[x] ]
	
	int low=lower_bound(v.begin(), v.end(), 2*v[y]-v[x]) - v.begin();
	int high=upper_bound(v.begin(), v.end(), 3*v[y]-2*v[x]) - v.begin();
	if(v[high] > 3*v[y]-2*v[x])
		high=high-1;
	
	int ans=0;
	for(int z=low; z<=high; z++){
		if(v[z]!=0){
			//cout<<"LOL"<<v[x]<<v[y]<<v[z]<<endl;
			ans++;
		}
	}
	return(ans);
	
}


int num_z(int x, int y)
{
	// indices x,y, want to find no. of z with YZ \in [XY, 2*XY]
	//int val1=v[x], val2=v[y];
	// val3 \in [ 2*v[y]-v[x] , 3*v[y]-2*v[x] ]
	
	int low=lower_bound(v.begin(), v.end(), 2*v[y]-v[x]) - v.begin();
	int high=upper_bound(v.begin(), v.end(), 3*v[y]-2*v[x]) - v.begin();
	if(v[high] > 3*v[y]-2*v[x])
		high=high-1;
	
	return(high-low+1);
	
}

int main()
{
	//freopen("baseball.in", "r", stdin);
    //freopen("baseball.out", "w", stdout);
	
	cin>>n;
	int in;
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	
	//cout<<num_z(0,2);
	
	int ans=0;
	for(int x=0; x<n-1; x++){
		for(int y=x+1; y<n; y++){
			int num=num_z(x,y);
			ans+=num;
			//cout<<x<<y<<endl;
		}
	}
	cout<<ans;

	return 0;
}

int main_brute_force()
{
	//freopen("baseball.in", "r", stdin);
    //freopen("baseball.out", "w", stdout);
	
	cin>>n;
	int in,diff1,diff2;
	for(int i=0; i<n; i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	
	int ans=0;
	for(int x=0; x<n-2; x++){
		for(int y=x+1; y<n-1; y++){
			for(int z=y+1; z<n; z++){
				diff1=v[y]-v[x];
				diff2=v[z]-v[y];
				if((diff2 >= diff1) && (diff2 <= 2*diff1))
					ans++;
			}
		}
	}
	cout<<ans;
	
	return 0;
}
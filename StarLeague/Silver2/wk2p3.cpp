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
int v[3009][3009],dp[3009][3009];

int main()
{
    //freopen("fairphoto.in", "r", stdin);
    //freopen("fairphoto.out", "w", stdout);
	
	
	cin>>n;
	int in;
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			cin>>in;
			v[i][j]=in;
			if(i==n-1)
				dp[i][j]=v[i][j];
		}
	}
	//cout<<"HELLO "<<sum[4][0]<<endl;
	for(int i=n-2; i>=0; i--){
		for(int j=0; j<i+1; j++){
			int val1=v[i][j]+dp[i+1][j];
			int val2=v[i][j]+dp[i+1][j+1];
			dp[i][j]=max(val1,val2);
			//cout<<i<<j<<"HELLO "<<sum[i][j]<<endl;
		}
	}
	cout<<dp[0][0];
	
	
	
	
	
	

	return 0;
}

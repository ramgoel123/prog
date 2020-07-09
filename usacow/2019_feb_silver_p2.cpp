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

int diff[1005][1005];
int grid[1005][1005];

int main()
{
    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);
	
	int n,k,x1,y1,x2,y2,ans=0;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>x1>>y1>>x2>>y2;
		x2--;
		y2--;
		for(int y=y1; y<=y2; y++){
			diff[x1][y]++;
			diff[x2+1][y]--;
		}
	}
/*
	cout<<"HELLO"<<endl;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<diff[i][j]<<" ";
		}
		cout<<endl;
	}
*/	
	for(int y=0; y<1005; y++){
		int c=0;
		for(int x=0; x<1005; x++){
			c+=diff[x][y];
			grid[x][y]=c;
			if(grid[x][y]==k){
				ans++;
			}
		}
		
	}
/*
	cout<<"HELLO"<<endl;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
*/
	cout<<ans;
	

	return 0;
}

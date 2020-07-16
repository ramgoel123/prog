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

int n,a,b,c,x,y,z;

int two_close(int t, int a)
{
	int dist=abs(t-a);
	if(dist==0||dist==1||dist==2||dist==n||dist==n-1||dist==n-2)
		return(true);
	return(false);
}

int close(int t1,int t2,int t3, int a1,int a2,int a3)
{
	//tests if (t1,t2,t3) is close to (a1,a2,a3)
	if(two_close(t1,a1) && two_close(t2,a2) && two_close(t3,a3))
		return(true);
	return(false);
}

int main()
{
    //freopen("fairphoto.in", "r", stdin);
    //freopen("fairphoto.out", "w", stdout);
	
	
	cin>>n;
	//cout<<"GOT N"<<endl;
	cin>>a;
	//cout<<"GOT a"<<endl;
	cin>>b;
	//cout<<"GOT b"<<endl;
	cin>>c;
	//cout<<"GOT c"<<endl;
	cin>>x;
	//cout<<"GOT x"<<endl;
	cin>>y;
	//cout<<"GOT y"<<endl;
	cin>>z;
	//cout<<"GOT z"<<endl;
	
	int ans=0;
	for(int i=1; i<n+1; i++){
		for(int j=1; j<n+1; j++){
			for(int k=1; k<n+1; k++){
				if(close(i,j,k,a,b,c) || close(i,j,k,x,y,z))
					ans++;
			}
		}
	}
	cout<<ans;
	
	
	
	
	

	return 0;
}

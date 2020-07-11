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
    //freopen("lemonade.in", "r", stdin);
    //freopen("lemonade.out", "w", stdout);
	
	int n,m;
	int speed,time,tot=0,dist1=0,dist2=0,tot1=0;
	cin>>n>>m;
	vector<int> v1, v2, boo;
	for(int i=0; i<n; i++){
		cin>>speed>>time;
		for(int j=0; j<time; j++){
			dist1+=speed;
			v1.push_back(dist1);
		}
			
	}
	for(int i=0; i<m; i++){
		cin>>speed>>time;
		tot+=time;
		for(int j=0; j<time; j++){
			dist2+=speed;
			v2.push_back(dist2);
		}
	}
	int b;
	for(int i=0; i<tot; i++){
		if(v1[i] < v2[i])
			b=0;
		else if(v1[i]==v2[i])
			b=1;
		else
			b=2;
		if(b!=1){
			boo.push_back(b);
			tot1+=1;
		}
		//cout<<"HELLO"<<endl;
		//cout<<i<<" "<<v1[i]<<" "<<v2[i]<<" "<<b<<endl;
	}
	int ans=0;
	for(int i=0; i<tot1-1; i++){
		//cout<<i<<boo[i]<<endl;
		if(boo[i]!=boo[i+1])
			ans+=1;
	}
	cout<<ans;
	
	

	return 0;
}

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


vector<vector<int>> all;
int same[100][3];
int diff[100][3];
int n,k,samect=0,diffct=0;

bool test(vector<int> one)
{
	//tests if vector one satisfies all conditions
	for(int i=0; i<samect; i++){
		int val1=same[i][0]-1;
		int val2=same[i][1]-1;
		if(one[val1] != one[val2])
			return(false);
	}
	for(int i=0; i<diffct; i++){
		int val1=diff[i][0]-1;
		int val2=diff[i][1]-1;
		if(one[val1] == one[val2])
			return(false);
	}
	return(true);
}

vector<vector<int>> fill_all(int n)
{
	vector<vector<int>> end;
	if(n==1){
		vector<int> v1, v2, v3;
		v1.push_back(0);
		v2.push_back(1);
		v3.push_back(2);
		end.push_back(v1);
		end.push_back(v2);
		end.push_back(v3);
		return(end);
	}
	vector<vector<int>> v0=fill_all(n-1);
	vector<vector<int>> v1=fill_all(n-1);
	vector<vector<int>> v2=fill_all(n-1);
	
	
	for(int i=0; i<v0.size(); i++){
		v0[i].push_back(0);
		v1[i].push_back(1);
		v2[i].push_back(2);
	}
	end.push_back(v0);
	end.push_back(v1);
	end.push_back(v2);
	return(end);
}

int main()
{
    //freopen("fairphoto.in", "r", stdin);
    //freopen("fairphoto.out", "w", stdout);
	
	cin>>n>>k;
	string s;
	int in1,in2;
	for(int i=0; i<k; i++){
		cin>>s>>in1>>in2;
		if(s=="S"){
			same[samect][0]=in1;
			same[samect][1]=in2;
			samect++;
		}
		else{
			diff[diffct][0]=in1;
			diff[diffct][1]=in2;
			diffct++;
		}
	}
	
	vector<vector<int>> all=fill_all(n);
	int ans=0;
	for(int i=0; i<all.size(); i++){
		if(test(all[i]))
			ans++;
	}
	cout<<ans;
	
	
	

	return 0;
}

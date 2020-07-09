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
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
	
	int n;
	char s;
	cin>>n;
	vector<char> v;
	for(int i=0; i<n; i++){
		cin>>s;
		v.push_back(s);
	}
	vector<int> p_win_prefix, h_win_prefix, s_win_prefix;
	int p_cur=0, h_cur=0, s_cur=0;
	for(int i=0; i<n; i++){
		if(v[i]=='P'){
			s_cur++;
			
		}
		else if(v[i]=='S'){
			h_cur++;
			
		}
		else{
			p_cur++;
			
		}
		s_win_prefix.push_back(s_cur);
		h_win_prefix.push_back(h_cur);
		p_win_prefix.push_back(p_cur);
	}
	//cout<<"HELLO"<<p_cur<<endl;
	int ANS=0, c1,c2,c3,c4,c5,c6;
	vector<int> ALL;
	
	for(int x=1; x<n;x++){
		c1=p_win_prefix[n-1]-p_win_prefix[x-1]+h_win_prefix[x-1];
		//cout<<"BWAHA"<<c1<<endl;
		c2=p_win_prefix[n-1]-p_win_prefix[x-1]+s_win_prefix[x-1];
		c3=s_win_prefix[n-1]-s_win_prefix[x-1]+h_win_prefix[x-1];
		c4=s_win_prefix[n-1]-s_win_prefix[x-1]+p_win_prefix[x-1];
		c5=h_win_prefix[n-1]-h_win_prefix[x-1]+s_win_prefix[x-1];
		c6=h_win_prefix[n-1]-h_win_prefix[x-1]+p_win_prefix[x-1];
		ALL.push_back(c1);
		ALL.push_back(c2);
		ALL.push_back(c3);
		ALL.push_back(c4);
		ALL.push_back(c5);
		ALL.push_back(c6);
	}
	ALL.push_back(p_win_prefix[n-1]);
	ALL.push_back(s_win_prefix[n-1]);
	ALL.push_back(h_win_prefix[n-1]);
	
	sort(ALL.begin(), ALL.end());
	
	cout<<ALL[ALL.size()-1];

	return 0;
}

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
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
	
	int n,num;
	string s;
	cin>>n;
	
	vector<int> v;
	for(int i=0; i<7; i++)
		v.push_back(0);
	for(int i=0; i<n; i++){
		cin>>s;
		cin>>num;
		if(s=="Bessie")
			v[0]+=num;
		else if(s=="Elsie")
			v[1]+=num;
		else if(s=="Daisy")
			v[2]+=num;
		else if(s=="Gertie")
			v[3]+=num;
		else if(s=="Annabelle")
			v[4]+=num;
		else if(s=="Maggie")
			v[5]+=num;
		else
			v[6]+=num;		
	}
	int minnum=0, minindex=0;
	for(int i=0; i<7; i++){
		if(v[i] <= minnum){
			minnum=v[i];
			minindex=i;
		}
	}
	
	

	return 0;
}

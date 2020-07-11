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
int arr[1000009], p[1000009];

int main()
{
    freopen("stacking.in", "r", stdin);
    freopen("stacking.out", "w", stdout);
	
	cin>>n>>k;
	
	int a,b;
	for(int i=0; i<k; i++){
		cin>>a>>b;
		arr[a]++;
		arr[b+1]--;
	}
	int cur=0;
	for(int i=0; i<n;i++){
		cur+=arr[i];
		p[i]=cur;
		//cout<<"HI"<<p[i]<<" ";
	}
	sort(p,p+n);
	
	cout<<p[(n-1)/2];
	
	
	
	
	

	return 0;
}

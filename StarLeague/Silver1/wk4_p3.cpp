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

int w,r;
int arr[105][105];

struct seat
{
	int row;
	int col;
};

int sqdist(seat s)
{
	// square of distance to seat 1
	int x=s.row, y=s.col;
	int mid=(w+1)/2;
	int dist=(y-mid)*(y-mid) + (x-1)*(x-1);
	return(dist);
}

bool compare_seats(seat s1, seat s2)
{
	int dist1=sqdist(s1), dist2=sqdist(s2);
	if(dist1 != dist2)
		return(dist1 < dist2);
	if(s1.row != s2.row)
		return(s1.row < s2.row);
	if(s1.col != s2.col)
		return(s1.col < s2.col);
	return(-1); // s1=s2
}

int main()
{
    //freopen("lemonade.in", "r", stdin);
    //freopen("lemonade.out", "w", stdout);
	
	cin>>w>>r;
	vector<seat> v;
	seat temp;
	for(int i=1; i<r+1; i++){
		for(int j=1; j<w+1; j++){
			temp.row=i;
			temp.col=j;
			v.push_back(temp);
		}
	}
	sort(v.begin(), v.end(), compare_seats);
	int counter=0;
	for(int i=1; i<r+1; i++){
		for(int j=1; j<w+1; j++){
			//cout << v[counter].row<<" "<<v[counter].col<<" "<<counter+1<<endl;
			arr[v[counter].row][v[counter].col]=counter+1;
			counter++;
		}
	}
	
	for(int ro=r; ro>=1; ro--){
		for(int co=1; co<=w; co++){
			cout<<arr[ro][co]<<" ";
		}
		cout<<endl;
	}
	

	return 0;
}

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
#include <iomanip>

using namespace std;

double c;

double f(double x)
{
	return(x*x + sqrt(x));
}

int main()
{
    
	cin>>c;
	
	//double x=sqrt(10);
	//cout<<setprecision(7)<<x;
	
	
	double low=0, high=c, mid;
	while(high >= low){
		// add 0.000001
		mid=(low+high)/2;
		//cout<<"HELLO "<<mid<<endl;
		if(abs(f(mid)-c) < 0.000000000000001){
			break;
		}
		else if(f(mid) - c >= 0.000000000000001){
			high=mid-0.000000000000001;
		}
		else
			low=mid+0.000000000000001;
	}
	cout<<fixed;
	cout<<setprecision(8)<<mid;
	

	return 0;
}

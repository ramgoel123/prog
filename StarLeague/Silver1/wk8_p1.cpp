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
    //freopen("fairphoto.in", "r", stdin);
    //freopen("fairphoto.out", "w", stdout);
	
	string s;
	cin>>s;
	int n=s.length();
	stack<char> st;
	for(int i=0; i<n; i++){
		char c=s[i];
		if(c=='('||c=='['||c=='{')
			st.push(c);
		else{
			if(st.empty()){
				cout<<"Not Valid";
				return 0;
			}
			char t=st.top();
			if((t=='('&&c==')')||(t=='['&&c==']')||(t=='{'&&c=='}'))
				st.pop();
			else{
				cout<<"Not Valid"<<endl;
				//cout<<i<<c<<t;
				return 0;
			}
		}
	}
	cout<<"Valid";
	
	
	
	

	return 0;
}

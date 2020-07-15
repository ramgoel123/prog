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
	
	int NUM,n;
	string s;
	cin>>NUM;
	for(int ct=0; ct<NUM; ct++){
		cin>>n>>s;
		stack<char> st;
		for(int i=0; i<n; i++){
			char c=s[i];
			int flag=0;
			if(c=='>')
				st.push(c);
			else{
				if(st.empty()){
					cout<<"illegal"<<endl;
					flag=1;
					break;
				}
				char t=st.top();
				if(t=='<'&&c=='>')
					st.pop();
				else{
					cout<<"illegal"<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)
				cout<<"legal"<<endl;
				
		}
		
	}
	
	
	
	
	
	

	return 0;
}

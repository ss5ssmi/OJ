#include<bits/stdc++.h>
using namespace std;
int main() {
	int val[3],d,cnt= 0;
	cin>>val[0]>>val[1]>>val[2]>>d;
	sort(val,val+3); 
	
	cnt += (d > (val[1] - val[0]) ? d - (val[1] - val[0]) : 0); 
	
	cnt += (d > (val[2] - val[1]) ? d - (val[2] - val[1]) : 0);
	cout<<cnt<<endl;
	return 0;
}

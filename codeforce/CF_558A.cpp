#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,a;
}z[100],f[100];
int cmp(node a,node b){
	return abs(a.x)<abs(b.x);
}
int main() {
	int n,x,a,i=0,j=0;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>x>>a;
		if(x>0) {z[i].x=x;z[i].a=a;i++;}
		else  {f[j].x=x;f[j].a=a;j++;}
	}
	sort(z,z+i,cmp);
	sort(f,f+j,cmp);
	int sum=0,t=(i<j?i:j);
	for(int k=0;k<t;k++){
		sum+=z[k].a;
		sum+=f[k].a; 
	}
	if(i>j) sum+=z[t].a;
	else if(j>i) sum+=f[t].a;
	cout<<sum;
	return 0;
}

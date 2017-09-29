#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int id,d,c;	
}ts;
bool cmp(ts a,ts b){
	if((a.d+a.c)!=(b.d+b.c)){
		return (a.d+a.c)>(b.d+b.c);
	}else if(a.d!=b.d){
			return a.d>b.d;
	}else{
			return a.id<b.id;
	}
}
int main(){
	int n,l,h,count=0;
	vector<ts> v1,v2,v3,v4;
	ts stu;
	scanf("%d%d%d",&n,&l,&h);
	
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&stu.id,&stu.d,&stu.c);
		if(stu.d>=l&&stu.c>=l){
			count++;
			if(stu.d>=h&&stu.c>=h){
				v1.push_back(stu);
			}else if(stu.d>=h&&stu.c<h){
				v2.push_back(stu);
			}else if(stu.d<h&&stu.c<h&&stu.d>=stu.c){
				v3.push_back(stu);
			}else{
				v4.push_back(stu);
			}
		} 
	}
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	sort(v3.begin(),v3.end(),cmp);
	sort(v4.begin(),v4.end(),cmp);
	printf("%d\n",count);
	for(int i=0;i<v1.size();i++){
		printf("%d %d %d\n",v1[i].id,v1[i].d,v1[i].c);
	}
	for(int i=0;i<v2.size();i++){
		printf("%d %d %d\n",v2[i].id,v2[i].d,v2[i].c);
	}
	for(int i=0;i<v3.size();i++){
		printf("%d %d %d\n",v3[i].id,v3[i].d,v3[i].c);
	}
	for(int i=0;i<v4.size();i++){
		printf("%d %d %d\n",v4[i].id,v4[i].d,v4[i].c);
	}
	return 0;
}

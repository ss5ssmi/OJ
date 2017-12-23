#include<bits/stdc++.h>
using namespace std;
int s1,s2,t1,t2,ans=0;
char s[2];
string t[1000];
void bf(int c,int r) {
	if(c<t1 && r>t2) {
		t[ans++]="RD";
		bf(c+1,r-1);
	} else if(c<t1 && r<t2) {
		t[ans++]="RU";
		bf(c+1,r+1);
	} else if(c>t1 && r>t2) {
		t[ans++]="LD";
		bf(c-1,r-1);
	} else if(c>t1 && r<t2) {
		t[ans++]="LU";
		bf(c-1,r+1);
	} else if(c==t1 && r>t2) {
		t[ans++]="D";
		bf(c,r-1);
	} else if(c==t1 && r<t2) {
		t[ans++]="U";
		bf(c,r+1);
	} else if(c<t1 && r==t2) {
		t[ans++]="R";
		bf(c+1,r);
	} else if(c>t1 && r==t2) {
		t[ans++]="L";
		bf(c-1,r);
	}
}
int main() {
	scanf("%s",s);
	s1=s[0]-'a'+1;
	s2=s[1]-'0';
	scanf("%s",s);
	t1=s[0]-'a'+1;
	t2=s[1]-'0';
	bf(s1,s2);
	printf("%d\n",ans);
	for(int i=0;i<ans;i++){
		cout<<t[i]<<endl;
	}
	return 0;
}

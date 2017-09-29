#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;
int main() {
	char name[100];
	map<char,int> m;
	while(scanf("%s",&name)!=EOF) {
		m.clear();
		for(int i=0;i<strlen(name);i++){
			m[name[i]]++;
		}
		if(m.size()%2==0)
			printf("CHAT WITH HER!\n");
		else
			printf("IGNORE HIM!\n");
	}
	return 0;
}

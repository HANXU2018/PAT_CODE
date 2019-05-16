#include<iostream>
using namespace std;
int main(){
	long long int a,b,c;
	int n;
	cin >>n;
	for(int i=1;i<=n;i++){
		string s;
		cin >>a>>b>>c;
		a+b>c?s="true":s="false";
		printf("Case #%d: %s\n",i,s.c_str());
	}
	return 0;
} 

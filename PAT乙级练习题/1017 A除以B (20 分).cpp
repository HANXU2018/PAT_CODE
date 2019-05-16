#include<iostream>
using namespace std;
int main(){
	string s;
	int a,t=0,temp=0;
	cin >>s>>a;
	t=(s[0]-'0')/a;
	temp=(s[0]-'0')%a;
	int len=s.length();
	if((t!=0&&len>1)||len==1)cout<< t;
	for(int i=1;i<len;i++){
		t=(temp*10+s[i]-'0')/a;
		temp=(temp*10+s[i]-'0')%a;
		cout <<t;
	}
	cout <<" "<<temp;
	return 0;
}

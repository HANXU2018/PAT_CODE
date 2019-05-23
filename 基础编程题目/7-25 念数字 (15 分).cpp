#include<iostream>
using namespace std;
string shu[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int wei=0;
void dushu(int a){
	wei++;
	if(a>10){
		
		dushu(a/10);
		wei--;
		cout<<shu[a%10];
		if(wei!=0){
			cout<<' ';
		}
	}
	else{
		wei--;
		cout<<shu[a%10];
		if(wei!=0){
			cout<<' ';
		}
	}
}
int main(){
	
	int a;
	cin>>a;
	if(a<0){
		cout<<"fu ";
		a=-a;
	}
	dushu(a);
	
	return 0;
}

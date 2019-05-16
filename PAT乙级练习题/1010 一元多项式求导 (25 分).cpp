#include<iostream>
using namespace std;
int main(){
	int a,b;
	int flag=0;
	while(cin>>a>>b){
		
		if(flag){
				if(b!=0){
			cout <<" "<<a*b<<" "<<b-1;
		}}
		else{
			if(b!=0){
				flag=1;
			cout <<a*b<<" "<<b-1;
			
		}
		
	
	}}
	if(flag==0)cout<<"0 0";
	return 0;
} 

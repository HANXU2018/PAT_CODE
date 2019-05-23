#include<iostream>
using namespace std;
int main(){
	int n,u,d;
	cin >>n>>u>>d;
	int i=0;
	while(n>0){
		i++;
		if(i%2==0){
			n+=d;
		}
		else{
			n-=u;
		}
		
	}
	cout << i;
	return 0;	
} 

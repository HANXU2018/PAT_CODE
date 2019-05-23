#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int a,b,sum=0;
	for(a=1;a<=100;a++){
		for(b=a;b<=100;b++){
			if(a*a+b*b==n){
				printf("%d %d\n",a,b);
				sum++;
			}
		}
	}
	if(sum==0){
		printf("No Solution");
	}
	return 0;
} 

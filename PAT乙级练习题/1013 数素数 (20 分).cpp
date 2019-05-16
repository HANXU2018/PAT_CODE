#include<iostream>
#include<math.h>
using namespace std;
int isprime(int i){
	int a;
	for(a=2;a<=sqrt(i);a++){
		if(i%a==0){
			return 0;
		}
	} 
	return 1;
}
int main(){
	int m,n;
	int i=1;
	int count =1;
	cin >> m >> n;
	
	while(count<=n+1){
		if(isprime(i)){
			if(count==n+1){
				cout<<i;
				return 0;
			}
			if(count>m){
				
				if(count>m&&(count-m)%10==0){
					cout <<i<< endl;
				}
				else{
					cout<<i<<" ";
				}
			}
			
			count++;
		}
		i++;
	}
	return 0;
} 

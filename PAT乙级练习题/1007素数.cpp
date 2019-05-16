#include<iostream>
#include<math.h>
using namespace std;
int isprime(int x){
	for(int i=2;i<sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	} 
	cout<< x;
	return 1;
	
}
int main(){
	for(int i=2;i<100;i++){
		if(isprime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
int isprime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	} 
	//cout<< x;
	return 1;
	
}
int main(){
	int x;
	cin >> x;
	int sum=0;
	while(x>=5){
		int a,b;
		a=isprime(x);
		b=isprime(x-2);
		//cout<<endl;
		if(a){
			if(b){
				cout<< x<<x-2<<endl;
				sum++;
			}
		}
		x=x-1;
	} 
	cout << sum;
	return 0;
}
 

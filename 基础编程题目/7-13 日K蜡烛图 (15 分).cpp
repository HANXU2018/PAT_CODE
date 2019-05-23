#include<iostream>
using namespace std;
int main(){
	float open ,high, low ,close;
	cin >>open>>high>>low>>close;
	if(close<open){
		cout<<"BW-Solid";

	}
	else if(close==open){
		cout<<"R-Cross";
	}
	else{
		cout<<"R-Hollow";
	}
	if(high>open&&high>close){
		if(low<open&&low<close){
			cout<<" with Lower Shadow and Upper Shadow";
			
		}
		else{
				cout<<" with Upper Shadow";
		}
	
	}
	else {
		if(low<open&&low<close){
			cout<<" with Lower Shadow";
		}
	}

	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n=0;
	string s;
	cin >> n>> s;
	int i=0;
	int row=0;
	while(true){
		if((2*i*(i+2)+1)>n){
			row=i-1;
			break;
		}
		i++;
	}
	for(int i =row;i>=1;i--){
		for(int k=row-i;k>=1;k--)cout<<" ";
		for(int k=i*2+1;k>=1;k--)cout<< s;
		cout <<endl;
	}
	for(int i=0;i<row;i++){
	cout<<" ";	
	}
	if(n>=7){cout <<"*"<<endl; 
	}
	else{
		cout<<"*";
	}
     
	for(int i =1;i<=row;i++){
		for(int k=row-i;k>=1;k--)cout<<" ";
		for(int k=i*2+1;k>=1;k--)cout<< s;
		if(i!=row)cout <<endl;
	} 
	int sum=n-2*row*(row+2)-1;
	if(sum!=0)cout<<endl<<sum;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
	return 0;
}

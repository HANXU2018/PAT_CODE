#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	string N;
	cin >>N;
	vector<int> a(10);
	for(int i=0;i<N.length();i++){
		a[N[i]-'0']++;
	
	}
	//sort(a.begin(),a.end());
	for(int i=0;i<10;i++){
		if(a[i]>0){
			cout<< i<<":"<<a[i]<<endl;
	}}
	
	return 0;
} 

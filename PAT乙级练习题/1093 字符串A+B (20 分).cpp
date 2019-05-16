#include<iostream>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int c[300]={0};
	for(int i=0;i<a.size();i++){
		if(c[a[i]]==0){
			cout<< a[i];
			c[a[i]]++;
		}
	}
	for(int i=0;i<b.size();i++){
		if(c[b[i]]==0){
			cout<< b[i];
			c[b[i]]++;
		}
	}
	return 0;
} 

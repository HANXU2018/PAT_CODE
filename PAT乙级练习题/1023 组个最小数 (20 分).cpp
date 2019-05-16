#include<iostream>
using namespace std;
int main(){
	int a[10]={0};
	int sum=0;
	for(int i=0;i<10;i++){
		int b;
		cin >>b;
		sum+=b;
		a[i]=b;
	}//输入十个数和数字位数
	//输出第一个
	for(int i=1;i<10;i++){
		if(a[i]>0){
			cout<<i;
			a[i]--;
		
			sum--;
				break;
		}
	} 
	int k=0;
	while(sum>0){
		while(a[k]>0){
			cout<<k;
			a[k]--;
			sum--;
		}
		k++;
	}
	return 0;
}

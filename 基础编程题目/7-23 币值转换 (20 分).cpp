#include<iostream>
using namespace std;
char shuzi[10]={'a','b','c','d','e','f','g','h','i','j'};
char weishu[9]={' ','S','B','Q','W','S','B','Q','Y'};
int wei=0;
void shuchu(int a){
	wei++;
	if(a>10){
		shuchu(a/10);
		wei--;
		
		cout<<shuzi[a%10];
		cout<<weishu[wei];
	}
	else{
		wei--;
		cout<<shuzi[a%10];
		cout<<weishu[wei];
	}
}
int main(){
	int a;
	cin>>a;
	shuchu(a);
	
} 

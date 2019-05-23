#include<iostream>
using namespace std;
int yue(int a,int b){
	int c=a;
	for(c;c>=1;c--){c
		if(a%c==0&&b%c==0){
			return c;
		}
	}
	return 1;
}
int main(){
	int a,b;
	scanf("%d/%d",&a,&b);
	int c=yue(a,b);
	printf("%d/%d",a/c,b/c);;
	return 0;
}

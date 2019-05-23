#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=1;
	int b=1;
	for(;a<=n;a++){
		for(b=1;b<=a;b++){
			printf("%d*%d=%-4d",b,a,a*b);
		}
		if(a<n)
		printf("\n");
	}
} 

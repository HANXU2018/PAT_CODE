#include<stdio.h>
int main(){
	char c;
	int a=0;
	scanf("%c",&c);
	while(c!='.'){
		if(c==' '){
			printf("%d ",a);
			a=0;
		}
		else{
			a++;
		}
			scanf("%c",&c);
	}
printf("%d ",a);
	return 0;
}

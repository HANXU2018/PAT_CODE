#include<iostream>
using namespace std;
int main(){
	int y,f;
	int n;
	cin>>n;
	//n=98f-199y;
	
	for(f=0;f<100;f++){
		for(y=0;y<100;y++){
			if(n==98*f-199*y){
				printf("%d.%d",y,f);
				return 0;
			}
		}
	}
	printf("No Solution");
	return 0;
} 

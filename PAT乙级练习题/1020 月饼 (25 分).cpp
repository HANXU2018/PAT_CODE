#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct mooncake{
	float mount=0,prize=0,value=0;
};
int cmp(mooncake a,mooncake b){
	return a.prize>b.prize;
}
int main(){
	int n=0;
	float sum=0;
	float count=0.0;
	cin >>n>>sum;
	vector<mooncake>cake(n);
	for(int i=0;i<n;i++){
		scanf(" %f",&cake[i].mount);
	}
	for(int i=0;i<n;i++){
		scanf(" %f",&cake[i].value);
	}
	for(int i=0;i<n;i++){
        if(cake[i].mount!=0)
		{cake[i].prize=cake[i].value/cake[i].mount;
		}
        else{
            cake[i].prize=0;
        }
	}
	sort(cake.begin(),cake.end(),cmp);
	int i=0;
	for(int i=0;i<n;i++){//用while循环段错误，因为可能所有月饼都卖完了，需求也没有满足 
		if(sum<cake[i].mount){
			//cout<< cake[i].prize<<endl;
			count+=cake[i].prize*sum;
			sum-=sum;
		}
		if(sum>=cake[i].mount){
			//cout<< cake[i].prize<<endl;
			count+=cake[i].value;
			sum-=cake[i].mount;
		}
		
		
		
	}
	printf("%0.2f",count);
	
	return 0;
} 

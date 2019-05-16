#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct stu{
	int id;
	int de;
	int cai;
};
int cmp(struct stu a,struct stu b){
	if((a.de+a.cai)!=(b.de+b.cai)){
		return (a.de+a.cai)>(b.de+b.cai);
		
	}
	else if(a.de!=b.de){
		return a.de>b.de; 
	}
	else{
		return a.id<b.id;
	}
}
int main(){
	int mun,low,high;
	 scanf("%d %d %d", &mun, &low, &high);
	vector<stu>	 v[4];
	int count =mun;
	stu temp;
	for(int i=0;i<mun;i++){
		scanf("%d %d %d",&temp.id,&temp.de,&temp.cai);
		if(temp.de<low||temp.cai<low){
			count--;
		}
		else if(temp.de>=high&&temp.cai>=high){
			v[0].push_back(temp);
		}
		else if(temp.de>=high&&temp.cai<high){
			v[1].push_back(temp);
		}
		else if(temp.de<high&&temp.cai<high&&temp.de>=temp.cai){
			v[2].push_back(temp);
		}
		else{
			v[3].push_back(temp);
		}
		
	}
	cout << count <<endl;
	for(int i=0;i<4;i++){
		sort(v[i].begin(),v[i].end(),cmp);
		for(int j=0;j<v[i].size();j++){
			printf("%d %d %d\n",v[i][j].id,v[i][j].de,v[i][j].cai);
		}
	}
	return 0;
}

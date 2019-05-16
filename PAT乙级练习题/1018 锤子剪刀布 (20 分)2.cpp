#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a,b;
	int sum[2][3]={0};
	int M1=0,M2=0;//M1,M2;³öÏÖÁË¶Î´íÎó 
	int jia=0,yi=0,p=0;
	for(int i=0;i<n;i++){
		cin >> a>>b;
		if(a==b){
			p++;
		}
		else if(a=="C"&&b=="J"){
			jia++;
			sum[0][1]++;
		}
		else if(a=="J"&&b=="B"){
			jia++;
			sum[0][2]++;
		}
		else if(a=="B"&&b=="C"){
			jia++;
			sum[0][0]++;
		}
		else if(b=="C"&&a=="J"){
			yi++;
			sum[1][1]++;
		}
		else if(b=="J"&&a=="B"){
			yi++;
			sum[1][2]++;
		}
		else if(b=="B"&&a=="C"){
			yi++;
			sum[1][0]++;
		}
		
	}
	int max[2]={0};
	for(int i=0;i<3;i++){
		if(max[0]<sum[0][i]){max[0]=sum[0][i];M1=i;
		} 
		if(max[1]<sum[1][i]) {max[1]=sum[1][i];M2=i;
		}
	}
	
	string N[3]={"B","C","J"};
	cout <<jia<<" "<<p<<" "<<yi<<endl;
	cout <<yi<<" "<<p<<" "<<jia<<endl;

	cout <<N[M1]<<" "<<N[M2];
	return 0;
} 

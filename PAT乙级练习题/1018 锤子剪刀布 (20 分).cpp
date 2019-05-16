//1018 ´¸×Ó¼ôµ¶²¼ (20 ·Ö)
#include<iostream>
using namespace std;
int main(){
	int N;
	cin >>N;
	string a,b;
	int s[2][26]={0};
	int jia=0,yi=0,p=0;
	int max1=0,max2=0;
	string j1,y1;
	for(int i=0;i<N;i++){
		cin >>a>>b;
		if(a[0]==b[0])p++;
		else if((a[0]=='C'&&b[0]=='J')||(a[0]=='J'&&b[0]=='B')||(a[0]=='B'&&b[0]=='C')){
		jia++;
		s[0][a[0]-'A']++;
		if(s[0][a[0]-'A']>max){
			max=s[0][(a[0]-'A')];
			j1=s[0][a[0]];
		}	
		}
		else{
			yi++;
			s[1][b[0]-'A']++;
			if(s[1][b[0]-'A']>max){
			max=s[1][b[0]-'A'];
			y1=s[1][b[0]];
		}
			
		} 
	}
	cout <<jia<<" "<<p<<" "<<yi<<endl;
	cout <<yi<<" "<<p<<" "<<jia<<endl;
	cout <<j1<<" "<<y1;
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n; 
	int sum1=0;
	int count1=0;
	int flag=1;
	int sum2=0;
	int count2=0;
	int count3=0;
	int sum4=0;
	int count4=0;
	int count5=0;
	int max5=-1;
	int M;
	cin>>M;
	while(M>0){
		M--;
		cin>>n;
		if(n%5==0){
			if(n%2==0){
				sum1+=n;
				count1++;
			}
		}
		else if(n%5==1){
			count2++;
			if(flag%2==1){
				sum2+=n;
			}
			else{
				sum2-=n;
			}
			flag++;
			
		}
		else if(n%5==2){
			count3++;
			
		}
		else if(n%5==3){
			cout<<n<<endl;
			count4++;
			sum4+=n;
			
		}
		else if(n%5==4){
			count5++;
			if(n>max5){
				max5=n;
			} 
			
		}
	}
	if(count1!=0){
		cout << sum1<<" ";
	}
	else{
		cout<<"N ";
	}
	if(count2!=0){
		cout << sum2<<" ";
	}
	else{
		cout<<"N ";
	}
	if(count3!=0){
		cout << count3<<" ";
	}
	else{
		cout<<"N ";
	}
	if(count4!=0){
		printf("%.1f",sum4*1.0/count4);
		cout <<" ";
	}
	else{
		cout<<"N ";
	}
	if(count5!=0){
		cout <<max5;
	}
	else{
		cout<<"N";
	}
	
}

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	float n;
	cin>>n;
	float sum=0;
	int i=0;
	int j=1;
	double  yuzi=1;//
	double  yumu=1;//一定要用double算n！才能不溢出 
	double yu=1;
	while(yu>=n){
		sum+=yu;
		i+=1;
		j+=2;
			//cout<<i<<"00"<<j<<endl;
		yuzi*=i;
		yumu*=j;
		yu=(1.0*yuzi/yumu);

	}
	sum+=yu;
	printf("%.6f",2*sum);

	return 0;
}

#include<stdio.h>
double a3,a2,a1,a0;
double f(double a){
	return a3*a*a*a+a2*a*a+a1*a+a0;
}

int main(){
	int ok=1;
	double a,b;
	scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
	scanf("%lf %lf",&a,&b);
	double m=(a+b)*0.5;
	while((b-a)>0.001){
		m=(a+b)*0.5;
		//printf("%.2f\n",f(a));
		if(f(a)==0){
			printf("%.2f",a);
			return 0;
		}
		else if(f(b)==0){
			printf("%.2f",b);
			return 0;
			
		}
		else if(f(m)==0){
			printf("%.2f",m);
			return 0;
		}
		else {
			if(f(a)*f(m)>0){
				a=m;
			} 
			else{
				b=m;
			}
		} 
	}
	 printf("%.2f",m);
	return 0;	
}

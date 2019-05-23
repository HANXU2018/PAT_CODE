#include<iostream>
using namespace std;
int main(){
	int t;
   int rabbit=0,turtle=0,minute,rest=-1,run=10; 
	cin >>t;
	while(t){
		turtle+=3;
		if (run-- > 0)
            rabbit += 9;
        if (run == 0 ){            //兔子跑10分钟回头看一下，如果比乌龟快就休息30分钟,反之再跑10分钟
            if (rabbit > turtle)   
            rest = 30;
            else run = 10 ;
        }
        if (rest-- == 0)                    //休息结束继续跑10分钟
            run = 10;

		
		
	}
	 if(turtle > rabbit)
        printf("@_@ %d",turtle);
    else if (rabbit > turtle)
        printf("^_^ %d",rabbit);
    else 
        printf("-_- %d",rabbit);
 
	
	return 0;
} 
